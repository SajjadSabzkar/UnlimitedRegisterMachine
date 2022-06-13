### Definition
An unlimited register machine, abbreviated URM, is an abstract machine with the following characteristics:

## Registers
A **URM** has a number of locations called registers which can store natural numbers: {0,1,2,…}.

Any given URM program may make use of only a finite number of registers.

Registers are usually referred to by the subscripted uppercase letters R1,R2,R3,…. The subscript (which is a natural number) is called the index of the register.

The number held at any one time by a register is usually referred to by the corresponding lowercase letter r1,r2,r3,….


The registers are unlimited in the following two senses:

1.  Although a URM program may make use of only a finite number of registers, there is no actual upper bound on how many a particular program can actually use.
2. There is no upper bound on the size of the natural numbers that may be stored in any register.

## Basic Instructions
Name | Notation | Effect | Decription
| --- | --- | --- | --- |
Zero | Z(n) | 0 :arrow_right:  R<sub>n</sub> | Replace the number in R<sub>n</sub> by 0
Successor | S(n) | r<sub>n</sub> +1 :arrow_right: R<sub>n</sub> | Add 1 to the number in R<sub>n</sub>
Copy | C(m,n) | r<sub>m</sub> :arrow_right: r<sub>n</sub> | Replace the number in R<sub>n</sub> by number in R<sub>m</sub> (leaving the one in R<sub>m</sub> as it was)
Jump | J(m,n,q) | r<sub>m</sub> = r<sub>n</sub> ? => q | if the number R<sub>m</sub> and R<sub>n</sub> are equal, go to instruction number q otherwise go to the next instruction

> Basic instructions are also (and more commonly) known as commands, because the word's shorter and quicker to say.

##### Example 1. f(x, y) = x + y
The program below computes the sum of two numbers. The inputs are two numbers found on the first two registers. When the program terminates the first register contains the sum.
```
1. J(1, 2, 5)
2. S(0)
3. S(2)
4. J(1, 1, 1)
```



[Refrence Page ](https://proofwiki.org/wiki/Definition:Unlimited_Register_Machine)
[Refrence Example](https://github.com/vclyde/URM#example-1-fx-y--x--y)

