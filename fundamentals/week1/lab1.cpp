#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{

  int foo[5] = {1, 2, 3, 4, 5};

  cout << "Addresses of elements:" << endl;
  //TODO Print the addresses of array elements
  for (int i = 0; i < 5; i++) {
    cout << &foo[i] << endl;
  }

  for(int i=0; i<5;i++)
  {
    
  }
  cout << endl;

  cout << "Elements:" << endl;;
  //TODO Print all the elements using pointers
    for(int i=0; i<5; i++)
    {
      int *ptr = &foo[i];
      cout<< *ptr << endl;
    }
  cout << endl;

  return 0;
}
 