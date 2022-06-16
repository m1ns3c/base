#include "g.h"

/* order menu */
char *menu[] = {"a-add new record", "d-delete record", "q-quit", NULL};

int getchoice(char *greet,  char *choices[])
{
  int selected, chosen = 0;
  char **option;

  do {
    printf("Choice: %s\n", greet);
    option = choices;
    while (*option) {
      printf("%s\n", *option);
      option++;
    }

    selected = getchar(); // read char
    printf("--%c\n", selected);

    option = choices;
    while (*option) {
      printf("-%c\n", *option[0]);
      if (selected == *option[0]) {
	chosen = 1;
	break;
      }
      option++;
    }
    
    if (!chosen) {
      printf("Incorrect choice, please select again\n");
    }
  } while (!chosen);

  return selected;
}

int main()
{
  int choice = 0;
  do {
    choice = getchoice("Please select a action", menu);
    printf("Your choice is: %c\n", choice);
  } while (choice != 'q');
  return 0;
}
