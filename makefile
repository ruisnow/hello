
CC = g++

helloworld: helloworld.c
	$(CC) helloworld.c -o helloworld

clean:
	rm helloworld

