CC = gcc 

CCFLAGS = -O3 

LDFLAGS = -lm 

all: matmultc 

matmultc: main.o matmult.o 
	$(CC) -o $@ $^ $(LDFLAGS) 

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) $< 

main.o: main.c
	$(CC) -c $(CCFLAGS) $< 


clean:
	rm *.o
