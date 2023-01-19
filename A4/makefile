CC = g++
CFLAGS = -Wall -Wextra -pedantic
TARGET = test
DEP1 = customer
DEP2 = AbstractSort

all: $(TARGET)

$(TARGET): $(TARGET).cpp $(DEP1).o $(DEP2).o
	$(CC) $(CFLAGS) $(DEP1).o $(DEP2).o -o $(TARGET) $(TARGET).cpp

$(DEP1).o: $(DEP1).cpp
	$(CC) $(CFLAGS) -c $(DEP1).cpp

$(DEP2).o: $(DEP2).cpp
	$(CC) $(CFLAGS) -c $(DEP2).cpp

clean:
	rm $(TARGET) $(DEP1).o $(DEP2).o
