#include <stdio.h>       // For printf, etc.
#include <stdlib.h>      // For general-purpose functions (not directly used here)
#include <sys/time.h>    // For struct timeval (used in select timeout)
#include <unistd.h>      // For read(), select(), etc.
#include <sys/types.h>   // For type definitions used in system calls
#include <string.h>      // For memset(), etc.

/**
 * trl - Timeout Read Line
 * Waits for user input for a specified number of seconds.
 * If input is given within timeout, reads it and returns the string.
 * If not, returns NULL.
 */
char *trl(int timeout){
    // Static buffer to store user input
    // static ensures the buffer persists after function returns
    static char buf[512];

    // File descriptor set used by select() to monitor input sources
    fd_set rfds;

    // Timeout structure for select()
    struct timeval tv;

    // ret will hold return values from select() and read()
    int ret;

    // Initialize the fd_set to empty
    FD_ZERO(&rfds);

    // Add stdin (file descriptor 0) to the set
    // We're asking select() to monitor stdin for readability
    FD_SET(0, &rfds);

    // Set timeout: seconds part
    tv.tv_sec = timeout;

    // Set timeout: microseconds part (0 in this case)
    tv.tv_usec = 0;

    // select() blocks until:
    // (1) stdin becomes "read-ready" (i.e., user typed something), or
    // (2) timeout expires
    // First arg '1' = highest fd in rfds + 1 (here only fd 0 is monitored)
    ret = select(1, &rfds, 0, 0, &tv );

    // If select() reports readiness and stdin is in the set
    if(ret && FD_ISSET(0, &rfds)){

        // Clear the buffer before reading
        memset(buf, 0, 512);

        // Read up to 511 bytes from stdin into buf
        ret = read(0, buf, 511);

        // If read fails or reads 0 bytes (e.g., EOF), return NULL
        if(ret < 1){
            return 0;
        }

        // Strip the newline character added when user hits Enter
        ret--;
        buf[ret] = 0; // Null-terminate at that position

        // Return pointer to buffer containing the input string
        return buf;
    }
    else{
        // If select() timed out or error occurred, return NULL
        return 0;
    }
}


int main(){
    char *name;

    // Prompt user for input
    printf("What is your name, fast!\n");

    // Call trl() with a 3-second timeout
    name = trl(3);

    // If user entered input within 3 seconds
    if(name){
        printf("Hello %s ", name);
    }
    else{
        // If user took too long or input failed
        printf("Too slow lol");
    }

    return 0;
}
