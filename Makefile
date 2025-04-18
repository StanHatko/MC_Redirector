# Makefile to build the redirector library.

build: redirect_mc_lib.c
	gcc redirect_mc_lib.c -o redirect_mc_lib.so
	echo 'To use: export LD_PRELOAD=redirect_mc_lib.so'

clean:
	rm -f *.o *.so
