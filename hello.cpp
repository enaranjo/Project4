#include <iostream>
#include <string>
using namespace std;

int main(int argc, char*argv[])
{
  // Default is "World"
  string name;
  name = argv[10];
  if (name==" ")
    cout << "Hello World" << endl;
  else
  {
    name.erase(0, 5);
    cout << "Hello, "<< name<< endl;
  }
}  
