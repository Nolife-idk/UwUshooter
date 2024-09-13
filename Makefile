CXX = g++
TARGET = src/sfml-app
CXXFLAGS = -std=c++11 -g -O2 -Wall -Wno-reorder
CPPFLAGS = -I /usr/include
LDFLAGS = -L /usr/lib
LIBS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system

OBJECTS := $(patsubst src/%.cpp, src/%.o, $(wildcard src/*.cpp))

.PHONY: default all clean

default: $(TARGET)

all: default

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
		$(CXX) -o $@ $^ $(LDFLAGS) $(LIBS)

clean:

		-rm -rf $(OBJECTS) $(TARGET)
