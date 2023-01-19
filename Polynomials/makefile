CC = g++
CFLAGS = -g #-Wall -Wextra -pedantic
TARGET = driver
DEP1 = Polynomial

all: $(TARGET)

$(TARGET): $(TARGET).cpp $(DEP1).o
	$(CC) $(CFLAGS) $(DEP1).o -o $(TARGET) $(TARGET).cpp

$(DEP1).o: $(DEP1).cpp
	$(CC) $(CFLAGS) -c $(DEP1).cpp

clean:
	rm $(TARGET) $(DEP1).o