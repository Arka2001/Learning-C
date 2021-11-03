### Assignment 7

Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the [Quadratic Formula](https://en.wikipedia.org/wiki/Quadratic_formula).

If you need to brush up on the Quadratic Formula, hit up [Khan Academy](https://youtu.be/i7idZfS8t8w)!

Hint: Make your life easier by including the math.h header file. You may have to search online for an additional flag for gcc to get your code compiled correctly!

Extra Credit: Build in a mechanism which checks the solution by plugging it back into the formula and seeing `if` it equals 0. Use if control flow to instruct the user to double check all solutions which aren't confirmed (a lot won't be confirmed since they'll be truncated decimals).

### Example output

```
iamgroot:~/Learning-C/Assignment-07/
$ gcc assignment7.c -o assignment7 -lm
$ ./a.out
Enter the value of variable 'A': -7
Enter the value of variable 'B': 2
Enter the value of variable 'C': 9
The solution using the '+' operator is: -1.000000
The solution using the '-' operator is: 1.285714, but you might want to double-check that...
```

The `-lm` tag in the gcc command helps us to link the `math.h` header file to reference  to the C file that we created. This tag is required as by default the `math.h` header file is not linked like the other C standard libraries.