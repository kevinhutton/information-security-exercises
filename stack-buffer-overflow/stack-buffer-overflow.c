#include <stdio.h>
#include <strings.h>
#define PASSWORDLENGTH 12

// This this demonstrates a simple stack buffer overflow

int main(int argc, char *argv[]) {

  printf("This is a demonstration of a stack buffer overflow\n"
         "Enter a password greater than %d to trigger buffer overflow\n",
         (PASSWORDLENGTH));

  // login will determine if login was succesful
  int login = 0;
  // Input password from user
  char inputPassword[PASSWORDLENGTH];
  // The right password
  char rightPassword[PASSWORDLENGTH] = "Password";
  // Get password from user
  printf("Enter your password: \n");
  gets(inputPassword);

  if (strcmp(inputPassword, rightPassword, PASSWORDLENGTH) == 0) {
    login = 1;
  }
  // Simulate logging into a system
  if (login) {
    printf("Logging in !\n");
    return 0;
  } else {
    printf("Incorrect Password\n");
    return 1;
  }
}
