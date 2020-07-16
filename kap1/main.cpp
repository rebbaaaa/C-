//---------------------------------------------------
//
// Adder / Pluss sammen
//
// Program for å addere to heltall
//
#include <iostream>
using namespace std;
int main()
{
  int tall1;
  int tall2;
  int sum;

  cout << "Skriv to heltall med mellomrom mellom: ";
  cin >> tall1 >> tall2;
  sum = tall1 + tall2;
  cout << "Summen blir: " << sum << endl;
  return 0;
} // main
