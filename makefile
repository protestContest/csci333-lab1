CC = g++
CFLAGS = -Wall -Werror -Wextra -pedantic -Weffc++

all: hello

hello: hello.cpp
	$(CC) $(CFLAGS) hello.cpp -o hello

clean:
	rm -f hello
	rm -f *.o
