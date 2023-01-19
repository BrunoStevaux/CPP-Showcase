CC = g++
CFLAGS = ##-Wall -Wextra -pedantic
TARGET = driver
DEP1 = Product
DEP2 = View
DEP3 = ManagerView
DEP4 = CustomerView
DEP5 = Layout
DEP6 = ScreenLayout
DEP7 = WebLayout

all: $(TARGET)

$(TARGET): $(TARGET).cpp $(DEP1).o $(DEP2).o $(DEP3).o $(DEP4).o $(DEP5).o $(DEP6).o $(DEP7).o
	$(CC) $(CFLAGS) $(DEP1).o $(DEP2).o $(DEP3).o $(DEP4).o $(DEP5).o $(DEP6).o $(DEP7).o -o $(TARGET) $(TARGET).cpp

$(DEP1).o: $(DEP1).cpp
	$(CC) $(CFLAGS) -c $(DEP1).cpp

$(DEP2).o: $(DEP2).cpp
	$(CC) $(CFLAGS) -c $(DEP2).cpp

$(DEP3).o: $(DEP3).cpp
	$(CC) $(CFLAGS) -c $(DEP3).cpp

$(DEP4).o: $(DEP4).cpp
	$(CC) $(CFLAGS) -c $(DEP4).cpp

$(DEP5).o: $(DEP5).cpp
	$(CC) $(CFLAGS) -c $(DEP5).cpp

$(DEP6).o: $(DEP6).cpp
	$(CC) $(CFLAGS) -c $(DEP6).cpp

$(DEP7).o: $(DEP7).cpp
	$(CC) $(CFLAGS) -c $(DEP7).cpp

clean:
	rm $(TARGET) $(DEP1).o $(DEP2).o $(DEP3).o $(DEP4).o $(DEP5).o $(DEP6).o $(DEP7).o