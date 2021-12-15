getARandom.o : getARandom.c
	gcc -c getARandom.c -o getARandom.o

questions.o : questions.c
	gcc -c questions.c -o questions.o

verifyResponse.o : verifyResponse.c
	gcc -c verifyResponse.c -o verifyResponse.o

main.o : main.c
	gcc -c main.c -o main.o

natbee: getARandom.o questions.o verifyResponse.o main.c
	gcc main.c getARandom.o questions.o verifyResponse.o -o natbee
clean:
	rm -rf getARandom.o questions.o verifyResponse.o natbee
