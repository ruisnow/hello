
CC = g++

helloworld: helloworld.o
	$(CC)  -o $@ $^

helloworld.o: helloworld.cpp
	$(CC) -c $^ -o $@

clean:
	rm *.o

test:
	test "echo yes"

