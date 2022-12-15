/** File written by Kristian Mansfield as a demonstration of buffer overflow vulnerabilities **/

/** Include libraries **/
#include <stdlib.h>
#include <stdio.h>

/** MAIN **/
int main(int argc, char *argv[]) {

        // Declare the variables
        int starting_balance = 100;
        char name[16];

        // Welcome the user
        printf("Welcome! Create an account and we'll give you a $100 signup bonus!\n");
        printf("What is your name?\n");

        // Get the name of the new user
        gets(name);

        // Create the account
        printf("Hi %s\n", name);
        printf("Your balance is $%d!\n", starting_balance);

        // Send call to back-end
        // TODO

        return EXIT_SUCCESS;
}