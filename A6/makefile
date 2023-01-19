CC = g++
CFLAGS = -g -Wall -Wextra -pedantic
TARGET = A6Driver
DEP1 = Course
DEP2 = Student
DEP3 = Registrar

all: $(TARGET)

$(TARGET): $(TARGET).cpp $(DEP1).o $(DEP2).o $(DEP3).o
	$(CC) $(CFLAGS) $(DEP1).o $(DEP2).o $(DEP3).o -o $(TARGET) $(TARGET).cpp

$(DEP1).o: $(DEP1).cpp
	$(CC) $(CFLAGS) -c $(DEP1).cpp

$(DEP2).o: $(DEP2).cpp
	$(CC) $(CFLAGS) -c $(DEP2).cpp

$(DEP3).o: $(DEP3).cpp
	$(CC) $(CFLAGS) -c $(DEP3).cpp


clean:
	rm $(TARGET) $(DEP1).o $(DEP2).o $(DEP3).o