CC = g++
CFLAGS = -Wall -Wextra -pedantic 
TARGET1 = main
TARGET2 = implementation

all: $(TARGET1)

$(TARGET1): $(TARGET1).cpp $(TARGET2).o
	$(CC) $(CFLAGS) $(TARGET2).o -o $(TARGET1) $(TARGET1).cpp

$(TARGET2).o: $(TARGET2).cpp
	$(CC) $(CFLAGS) -c $(TARGET2).cpp

clean:$(TARGET1) *.o
	rm *.o