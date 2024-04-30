#include <iostream>
using namespace std;

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  // Check if the character is a small letter
  if (ch >= 'a' && ch <= 'z') {
    cout << "The character is a small letter." << endl;
  }

  // Check if the character is a capital letter
  else if (ch >= 'A' && ch <= 'Z') {
    cout << "The character is a capital letter." << endl;
  }

  // Check if the character is a numeric
  else if (ch >= '0' && ch <= '9') {
    cout << "The character is a numeric." << endl;
  }

  // Check if the character is a special character
  else {
    cout << "The character is a special character." << endl;
  }

  return 0;
}