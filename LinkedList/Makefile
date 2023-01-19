CC = g++
CFLAGS = -Wall -Wextra -pedantic -g
TARGET1 = test
TARGET2 = treeset

all: $(TARGET1)

$(TARGET1): $(TARGET1).cpp $(TARGET2).o
	$(CC) $(CFLAGS) $(TARGET2).o -o $(TARGET1) $(TARGET1).cpp

$(TARGET2).o: $(TARGET2).cpp
	$(CC) $(CFLAGS) -c $(TARGET2).cpp

clean:(TARGET1) *.o
	rm main *.o