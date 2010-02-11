passgen	: driver.o passgen.o
	gcc -lm -o passgen driver.o passgen.o
driver.o : driver.c
	gcc -c driver.c
passgen.o : passgen.c
	gcc -c passgen.c
clean:
	rm -f passgen *.o
