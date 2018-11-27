#include <iostream>

using namespace std;

int sum(int);
int product(int);

int main(){

  int n;

  cout<< "Provide a number ";
  cin>> n;

  cout<< "\nThe sum = " << sum(n) << endl;
  cout<< "\nThe product of the set of numbers from 1 to " << n << " = " << product(n) << endl;
  
  return 0;
}

int sum(int n){

  int sum = 0;
  
  for(int i = 1; i <= n; i++)
    sum += i;

  return sum;
}

int product(int n){

  int sum = 1;

  for (int i = 1; i <= n; i++)
    sum *= i;
  
  return sum;
}
