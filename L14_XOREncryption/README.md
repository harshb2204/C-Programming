# XOR Encryption in C

## Basic Concept
- If we use XOR to encrypt something, then we can decrypt it if we supply the ciphertext with the same key as when it was encrypted
- XOR (^) is a bitwise operator that returns 1 if the bits are different and 0 if they are the same

## Properties of XOR
- A ^ A = 0 (XORing a value with itself gives 0)
- A ^ 0 = A (XORing with 0 gives the original value)
- A ^ B ^ B = A (XORing twice with the same value gives the original value)
