#include<iostream>
using namespace std;

int main()
{
    try{
        try{
          throw 20;
        }
        catch(int n){
          std::cout << "Handle partially "<< n << '\n';
          throw; //Re-throwing an exception
        }
    }
    catch(int n){
      std::cout << "Handle partially rethrown " << n << '\n';
    }
  return 0;
}

//A function can also re-throw a function using the same "throw"
