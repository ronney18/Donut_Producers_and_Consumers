pc_threads: my_th_donuts.c
	gcc -o pc_threads my_th_donuts.c -lpthread

clean:
	rm -f pc_threads
