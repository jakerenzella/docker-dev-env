/** File written by Kristian Mansfield as a demonstration of buffer overflow vulnerabilities **/

/** Include libraries **/
#include <stdlib.h>
#include <stdio.h>

void get_name();

/** MAIN **/
int main(int argc, char *argv[]) {

        // You can't overwrite the starting balance now!!
        get_name();

        // Create balance
        int starting_balance = 100;
        printf("Your balance is $%d!\n", starting_balance);

        // TODO Create account

        return EXIT_SUCCESS;
}


void get_name() {
        char name[16];

        // Welcome the user 
        printf("Welcome! Create an account and we'll give you a $100 signup bonus!\n");
        printf("What is your name?\n");

        // Get their name
        gets(name);

        // Acknowledge the name
        printf("Hi %s\n", name);

        return;
}