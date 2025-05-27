- There is no such thing as a random value, because computers are based on logical operations and following different instructions.
- We have pseudo random functions, they are mathematical algorithms mimicking true randomness.
- man 3 rand(linux manuel)
- the rand() is mathematical algorithm that has a start value , each time it runs it makes another value out of it, but it starts at the same place everytime,if u call the function twice in the code it will give different values but if you call it everytime the code is run it returns the same value.

- We can give it a seed, it will create other values
- We can use srand(seed_value) to get a different value everytime the code is run, but the seed value needs to be changed
- To get a different value we can use getpid(), because every instance of running this program will give a different process id ,use it to seed