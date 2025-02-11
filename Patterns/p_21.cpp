#include<iostream>

  using namespace std;
  
  int main()
  {
    //A
    //A B
    //A B C
    //A B C D
    //A B C D E
    
    
    for(int i = 1; i <= 5; i++)
    {
      for(int j = 1; j <= i; j++)
      {
        cout << (char)(64 + j) << " ";
      } 
      cout << endl;
    }
    return 0;
  }