CC = g++
FLAGS = -Wall -Wextra -O3 -std=c++17
LINKS = -lstdc++fs

default: build

build: l.cc
	$(CC) $(FLAGS) -o l l.cc $(LINKS)
	
clean:
	rm l