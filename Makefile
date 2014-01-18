CC=g++

hellomake: hello.cpp
	$(CC)	-o hello hello.cpp

exercise1make: exercise1.cpp
	$(CC) -o exercise1 exercise1.cpp
