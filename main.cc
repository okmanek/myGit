#include <iostream>
#include <string>
#include "lib/Clara/include/clara.hpp"

#define print(x) std::cout << x << std::endl;
#define println(x) std::cout << x << std::endl;

using namespace clara;

class CommandLineArguments
{
public:
  int width = 0;
  std::string name = "<your name>";
  bool doIt = 0;
};

int main(int argc, char** argv)
{
  std::cout << "File: main.cc" << std::endl;

  CommandLineArguments myArgs;


  int width = 0;
  std::string name;
  bool doIt = false;
  std::string command;

  // for an Opt instance like this:
  //   auto a =
  //   Opt( name, "name" )
  //   ["-n"]["--name"]
  //   ("the name to use")
  // meaning of vars is:
  //   name - bind variable / lambda
  //   "name" - hint
  //   "-n" / "--name" - option(s)
  //   description(doc)

  auto cli
    = Opt( myArgs.width, "width" )
           ["-w"]["--width"]
           ("How wide should it be?")
    | Opt( myArgs.name, "name" )
           ["-n"]["--name"]
           ("By what name should I be known?")
    | Opt( myArgs.doIt )
           ["-d"]["--doit"]
           ("Which command to run?");

  auto result = cli.parse( Args( argc, argv ) );

  // print(width); // should print arg given after "-w | --width"
  // print(name); // should print arg given after "-w | --width"

  if( !result )
  {
    std::cerr << "Error in command line: " << result.errorMessage() << std::endl;
    exit(1);
  }

  std::cout << "width: " << myArgs.width
	        << ", name: "  << myArgs.name
			<< ", doit: " << myArgs.doIt
			<< std::endl;

  //print("text to print");
}
