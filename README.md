### Definition
An unlimited register machine, abbreviated URM, is an abstract machine with the following characteristics:

## Registers
A **URM** has a number of locations called registers which can store natural numbers: {0,1,2,…}.

Any given URM program may make use of only a finite number of registers.

Registers are usually referred to by the subscripted uppercase letters R1,R2,R3,…. The subscript (which is a natural number) is called the index of the register.

The number held at any one time by a register is usually referred to by the corresponding lowercase letter r1,r2,r3,….


The registers are unlimited in the following two senses:

(1): Although a URM program may make use of only a finite number of registers, there is no actual upper bound on how many a particular program can actually use.
(2): There is no upper bound on the size of the natural numbers that may be stored in any register.

## Basic Instructions
Name | Notation | Effect | Decription
| --- | --- | --- | --- |
Zero | Z(n) | 0 -> R_n | Replace the number in R_n by 0
Successor | S(n) | r_n +1 -> R_n | Add 1 to the number in R_n
Copy | C(m,n) | r_m -> R_n | Replace the number in R_n by number in R_m (leaving the one in R_m as it was)
Jump | J(m,n,q) | rm = rn ? => q | if the number R_m and R_n are equal, go to instruction number q otherwise go to the next instruction

> Basic instructions are also (and more commonly) known as commands, because the word's shorter and quicker to say.

[Refrence Page ](https://proofwiki.org/wiki/Definition:Unlimited_Register_Machine)
