# Makefile to build the MinIO mc-connector library.

build: mc_lib.c
	gcc mc_lib.c -o mc_lib.o

clean:
	rm -f *.o *.so
