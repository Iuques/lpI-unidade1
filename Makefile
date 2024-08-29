PROG = Main
CC = g++
CPPFLAGS = -O0 -g -Wall
OBJS = main.o complexo.o

# Código de compilação
$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : 
	$(CC) $(CPPFLAGS) -c main.cpp

complexo.o : complexo.h
	$(CC) $(CPPFLAGS) -c complexo.cpp

clean:
	rm -f $(PROG) $(OBJS)
