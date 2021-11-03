#include<stdio.h>

/*
    ! main() is the most important function in a C or C++ program
    ! main() function is considered to be the starting point of a program
    ! Now, since main() is a function, it can also take arguments.
    ! There are 2 arguments that main() function can take, one is an integer, which represents the total number of command line arguments required for executing the program
    ! The second is a pointer array which points to all the arguments given in the execution command
    ! if we print argc, i.e., the argument count, we get the total number of arguments including the program name.
    ! there fore if we give the arguments Firstname Lastname, actually the total number of arguments is 3
*/
void main(int argc, char* argv[]) {

    if(argc == 3){
        // Logic if the total number of arguments given is 3, i.e., name of program Firstname Lastname

        printf("Hello, %s %s", argv[1], argv[2]);

    } else{
        // Logic if the number of arguments given is other than 2

        printf("Usage: ./assignment9 Firstname Lastname");

    }
}