#
# Makefile for Project 2, Part 1
#

YACC    = bison -d -v
LEX     = flex
CC      = gcc
CPP     = g++ -g

TARGET  = tiny

OBJS += tinylex.o tinyparser.o main.o
RMFILES = core.* tinylex.cpp tinyparser.cpp tinyparser.hpp tinyparser.output $(TARGET) $(OBJS)

# Dependencies
$(TARGET): tinyparser.cpp tinylex.cpp tinyparser.hpp $(OBJS)
	$(CPP) -o $(TARGET) $(OBJS)

# Rules
%.cpp: %.y
	$(YACC) -o $(@:%.o=%.d) $<

%.o: %.cpp
	$(CPP) -o $@ -c $<

%.cpp: %.l
	$(LEX) -o$(@:%.o=%.d) $<

# Source
tinylex.o: tinylex.cpp tinyparser.hpp
tinylex.cpp: tinylex.l

tinyparser.o: tinyparser.cpp tinyparser.hpp
tinyparser.cpp: tinyparser.y

main.o: tinyparser.hpp

clean:
	rm -f $(RMFILES)
