#include <iostream>

using namespace std;

int sum(int);

int main(){

  int n;

  cout<< "Provide a number ";
  cin>> n;

  cout<< "The sum = " << sum(n) << endl;
  
  return 0;
}

int sum(int n){

  int sum = 0;
  
  for(int i = 1; i <= n; i++)
    sum += i;

  return sum;
}
