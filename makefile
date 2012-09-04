CC = g++
CFLAGS = -Wall -Werror -Wextra -pedantic -Weffc++

all: hello euler2

hello: hello.cpp
	$(CC) $(CFLAGS) hello.cpp -o hello

euler2: prob2.cpp
	$(CC) $(CFLAGS) prob2.cpp -o prob2

clean:
	rm -f hello
	rm -f *.o
