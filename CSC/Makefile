heap: heap.o pointers.o reference.o
	gcc heap.o -o heap

pointers: pointers.o
	gcc pointers.o -o pointers

reference: reference.o
	gcc reference.o -o reference

heap.o: heap.c
	gcc -c heap.c

pointers.o: pointers.c
	gcc -c pointers.c

reference.o: reference.cpp
	gcc -c reference.cpp

clean:
	rm *.o