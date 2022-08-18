CC=gcc
CFLAGS=-I.
# DEPS = method_file.h 
OBJ =  test1.o test2.o test3.o test4.o test5.o test6.o test7.o test8.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


main_file: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONEY: clean

clean:
	rm -f *.o *~ 
