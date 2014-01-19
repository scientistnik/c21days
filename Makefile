CC=g++

hellomake: hello.cpp
	$(CC)	-o hello hello.cpp

exercise1make: exercise1.cpp
	$(CC) -o exercise1 exercise1.cpp

exercise2make: exercise2.cpp
	$(CC) -o exercise2 exercise2.cpp

day4make: day4.cpp
	$(CC) -o day4 day4.cpp

