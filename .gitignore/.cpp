  
 
#include<iostream>
  
 
using namespace std;
 
 
int main()
 
 
 
 
{
 
 
     int x;
 
 
     int y;
 
 
  bool isPrime = true;
 
 
  
 
  cout << "Enter an integer: ";
 
 
  cin >> x;
  
 
  
 
  for(y = 2; y <= x / 2; ++y)
 
 
  {
 
 
      if(x % y == 0)
 
 
      {
 
 
          isPrime = false;
 
 
          break;
 
 
      }
 
 
  }
  
 
  if (isPrime)
 
 
      cout << "This is a prime number";
  
 
  else
  
 
      cout << "This is not a prime number";
  
 
 
 
  return 0;
  
 
 
 
}
 
 
