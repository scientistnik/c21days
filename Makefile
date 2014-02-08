CC=g++
SOURCES=day21.cpp
NAME=$(SOURCES)

all:
	clear
	$(CC) $(SOURCES) -o $(NAME:.cpp=) 

hellomake: hello.cpp
	$(CC)	-o hello hello.cpp

exercise1make: exercise1.cpp
	$(CC) -o exercise1 exercise1.cpp

exercise2make: exercise2.cpp
	$(CC) -o exercise2 exercise2.cpp

day4make: day4.cpp
	$(CC) -o day4 day4.cpp

day5make: day5.cpp
	$(CC) -o day5 day5.cpp

clean:
	rm -rf *~ day?? *.o
