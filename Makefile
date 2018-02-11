build/myGit: main.o my_math.o
	g++ -o myGit main.o my_math.o --std=gnu++11

main.o: main.cc my_math.hh
	g++ -c main.cc

my_math.o: my_math.cc my_math.hh
	g++ -c my_math.cc
