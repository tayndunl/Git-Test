//Taylor Dunlap
//main.cpp


#include <iostream>

using namespace std;

int sum(int num);
int product(int num);

int main(){

  int n;

  cout << "Hello World!" << endl;

  cout << "Enter a number: ";
  cin >> n;


  sum(n);
  cout << "Sum is: " << sum(n) << endl;

  product(n);
  cout << "Product is: " << product(n) << endl;

  return 0;
}

int sum(int num){

  int sum = 0;
  for(int i = 0; i < num; i++){

    sum += i;
  }

  return sum;
}


int product(int num){

  int product = 1;
  for(int i = 0; i < num; i++){

    product *= i;
  }

  return product;
}


