CXX = g++
CXXFLAGS = -Wall -Iinclude

SRCS = src/main.cpp src/tableau.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = tp8

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
