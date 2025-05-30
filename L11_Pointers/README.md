## Pointers
- Pointers are variables that store address of other variables.

![](/images/ptr1.png)
``` c
int a = 5;
int *p; // p is a pointer variable that stores an address of  integer.
p = &a; // ampersand gives address of the variable, it returns the pointer to the variable
// p contains address of a
print p // gives address of a
print &a //gives address of a 
print &p //gives address of p
print *p //returns the value stored in a i.e 5
//also called dereferencing
*p = 8; //modify value of a

print a //gives 8
```
![](/images/ptr2.png)


- pointer variable is of strong types
- we use them to dereference these addresses to access/mofidy the values



