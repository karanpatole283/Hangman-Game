#include <iostream>
#include <ctime>
using namespace std;

int tries = 3;
string message = "You have 3 chances!";

void hang_man(char state);
int checkGuess(char, string, string&);

int main()
{
  char letter;
  string month;
  string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  srand(time(NULL));
  int month_number = rand() % 12;
  month = months[month_number];
  string hide_month(month.length(), 'X');
  system("cls");

  while (tries != 0)
  {
    hang_man('n');
    cout << "\t\t\t\tLife: " << tries << endl;
    cout << hide_month << endl;
    cout << "\t\t\t\tGuess A Letter: ";
    cin >> letter;

    system("cls");

    if (checkGuess(letter, month, hide_month) == 0)
    {
      message = "Incorrect Letter";
      tries--;
    }
    else
    {
      message = "Nice! Correct Guess";
    }
    if (hide_month == month)
    {
      message = "You're Free!";
      hang_man('f');
      cout << "\t\t\t\tLife: " << tries << endl;
      cout << "\t\t\t\tThe month is: " << month << endl;
      break;
    }
  }
  if (tries == 0)
  {
    message = "You're Hanged!";
    hang_man('h');
    cout << "\t\t\t\tLife: " << tries << endl;
    cout << "\t\t\t\tThe month is: " << month << endl;
  }

  return 0;
}

int checkGuess(char guess, string real_month, string& hidden_month)
{
  int matches = 0;
  int len = real_month.length();
  for (int i = 0; i < len; i++)
  {
    if (guess == hidden_month[i])
    {
      return 0;
    }
    if (guess == real_month[i])
    {
      hidden_month[i] = guess;
      matches++;
    }
  }
  return matches;
}

void hang_man(char state)
{
  cout << "\t\t\t\t________________________" << endl;
  cout << "\t\t\t\t            |          |" << endl;
  cout << "\t\t\t\t            O          |" << endl;
  cout << "\t\t\t\t           / \\        |" << "\t     " << message << endl;
  cout << "\t\t\t\t            |          |" << "\t     /";
  if (state == 'f')
  {
    cout << " /\\";
  }
  cout << endl;
  cout << "\t\t\t\t           / \\        |           O  " << endl;
  cout << "\t\t\t\t      =============    |          / \\ " << endl;
  cout << "\t\t\t\t      |           |    |           |" << endl;
  cout << "\t\t\t\t      |           |    |          / \\" << endl;
  cout << "\t\t\t\t===============================================" << endl;
}
