#include <stdio.h>

char pwdSecret[] = "stack123!";

void print_secr()
{
  printf("Password is %s\n", pwdSecret);
}

int main(int argc, char **argv)
{
  int check=0;
  char buffer[32];

  gets(buffer);

  if(check == 0x74696445) {
    print_secr();
  } 
  else 
  {
    printf("No password to show\n");
  }
}
