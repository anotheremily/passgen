passgen	: src/driver.o src/passgen.o
	gcc -lm -o passgen src/driver.o src/passgen.o
driver.o : src/driver.c
	gcc -c src/driver.c
passgen.o : src/passgen.c
	gcc -c src/passgen.c
clean:
	rm -f passgen src/*.o
