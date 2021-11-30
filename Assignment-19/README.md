### Assignment 19

Initialize a `char` pointer variable. Use the `malloc()` function to allocate memory for a char array by assigning the result of `malloc()` to your pointer. Your program should check that the memory was indeed allocated and if not, print an error message and exit with code `1`. Make sure your allocation size is a multiple of the `char` data type by using the `sizeof()` function so the code is portable. <b>Google best practices for using `malloc()`</b>. Don't forget to use `free()` to free the memory space before exiting the program if successful.

### Example Output

```
iamgroot:- ~/Learning-C/Assignment-19/
$ gcc assignment19.c -o assignment19
$ ./assignment19
Memory was successfully allocated.
```
