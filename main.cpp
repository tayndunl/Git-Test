//Taylor Dunlap
//main.cpp

#include <iostream>

using namespace std;

int sum(int num);

int main(){

  int n;
 
  cout << "Hello World!" << endl;

  cout << "Enter a number: ";
  cin >> n;
  sum(n);
  cout << "Sum is: " << sum(n) << endl;
  
  return 0;

}

int sum(int num){

  int sum;
  for(int i = 0; i < num; i++){

    sum += i;
  }

  return sum;
}
