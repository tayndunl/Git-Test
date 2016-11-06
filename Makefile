#Compiler
CC = g++

#Compiler flags
CFlags = -c -Wall

#Executlable
TARGET = main
all: $(TARGET)

#links all .o files and reates the binary
$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

#compiles main.o from source
main.o: main.cpp 
	$(CC) main.cpp $(CFlags)

#removes all objects, emacs backups, and the target
clean:
	rm *.o  $(TARGET) *~
