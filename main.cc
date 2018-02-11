#include <iostream>
#include <getopt.h>

#define cout std::cout 

int main(int argc, char** argv)
{
  cout << "File: main.cc" << '\n';

  int option;
  while ((option = getopt(argc, argv, "cf")) != -1)
  {
    switch(option)
    {
      case 'c':
        cout << "chosen: c";
        break;
      case 'f':
        cout << "chosen: f";
        break;

      default: cout << "error";
    }
  }

}
