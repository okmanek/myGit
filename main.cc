#include <iostream>
#include <string>
#include "my_math.hh"

#define print(x) std::cout << x << std::endl;
#define println(x) std::cout << x << std::endl;

//using namespace clara;

int main(int argc, char** argv)
{
  std::cout << "File: main.cc" << std::endl;
/*
  int width = 0;
  std::string name;
  bool doIt = false;
  std::string command;

  auto cli
    = Opt( width, "width" )
           ["-w"]["--width"]
           ("How wide should it be?")
    | Opt( name, "name" )
           ["-n"]["--name"]
           ("By what name should I be known?")
    | Opt( doIt )
           ["-d"]["--doit"]
           ("Which command to run?");

  auto result = cli.parse( Args( argc, argv ) );
*/
  // print(width); // should print arg given after "-w | --width"
  // print(name); // should print arg given after "-w | --width"

  // test that includes work correctly
  int x = factorial(3);
  println("Factorial of 3 is: ");
  print(x);

  bool result = 0;
  if( !result )
  {
    //std::cerr << "Error in command line: " << result.errorMessage() << std::endl;
    //exit(1);
  }

  //print("text to print");
}
