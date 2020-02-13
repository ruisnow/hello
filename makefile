
CC = g++
objects = helloworld.o


helloworld: $(objects)
	$(CC)  -o $@ $^

$(objects): helloworld.cpp
	$(CC) -c $^ -o $@

.PHONY : clean
clean:
	-rm $(objects)

test:
	test "echo yes"

