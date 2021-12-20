#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void) {
    int file_descriptor;

    file_descriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if(file_descriptor < 0){
        printf("The open operation failed...\n");
        return -1;
    } else {
        printf("The open operation succeeded!\n");
    }

    int writer;

    writer = write(file_descriptor, "Writing test data to the file", 30);

    if(writer!=30){
        printf("The write operation failed...\n");
        return -1;
    } else {
        printf("The write operation succeeded!\n");
    }

    if(close(file_descriptor) < 0){
        printf("The close operation failed...\n");
        return -1;
    } else {
        printf("File closed successfully!");
    }

    return 0;
}