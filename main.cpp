#include <iostream>
#include <cstring>
using namespace std;
//function prototypes
bool verifyPassword(char *);
int verifyUpper(char *);
int verifyLower(char *);
int verifyNum(char *);
int verifyAlpha(char *);
int main()
{

const int SIZE=100; // array size
char password [SIZE]; // to hold a password string

// get the password input from users
cout << "The password must have 6 or more characters: " << "\n";
cout << "at least one uppercase character, " << "\n";
cout << "at least one lowercase character, and" << "\n";
cout << "at least one numeric digit. " << "\n";
cout << "\n";
cout << "Enter your password : ";
cin.getline (password, SIZE);

int length;
length = strlen(password);
if(length >= 6&&length<=SIZE)
{
while (!verifyPassword(password))
{
cout << "Invalid Password. Please enter VALID password : ";
cin.getline (password, SIZE);
}
cout << "Your password: " << password << ", is valid\n";
}
else
{
cout << "The password must have at least 6 or more characters long\n";

}
return 0;
}

//function definitions
bool verifyPassword(char *str)
{
int length = strlen(str);
return verifyUpper(str)&& verifyLower(str)&& verifyNum(str)&&verifyAlpha(str);
}

//verify upper case contained
int verifyUpper(char *str)
{
int num = 0;
int length = strlen(str);
for (int count = 0; count < length; count++)
{
if (!isupper(str[count]))
num++;
}
return num;
}

//verify lower case contained
int verifyLower(char *str)
{
int num = 0;
int length = strlen(str);
for (int count = 0; count < length; count++)
{
if (!islower(str[count]))
num++;
}
return num;
}
//verify number contained
int verifyNum(char *str)
{ int num = 0;
int length = strlen(str);
for (int count = 0; count < length; count++)
{
if (!isdigit(str[count]))
num++;
}
return num;
}
//verify if inputs are all alphabetic
int verifyAlpha(char *str)
{ int num = 0;
int length = strlen(str);
for (int count = 0; count < length; count++)
{
if (!isalpha(str[count]))
num++;
}
return num;
}
