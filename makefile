#
# TODO: Move `libmongoclient.a` to /usr/local/lib so this can work on production servers
#

# make       -> compile the shared library "libfoo.so"
# make clean -> remove the library file and all object files (.o)
# make all   -> clean and compile

CC 	:= g++ # This is the main compiler
# LD 	:= g++

SRCDIR	:= src
BUILDDIR:= build
TARGET 	:= bin/main
 
SRCEXT 	:= cpp
SOURCES := $(shell find $(SRCDIR)/* -type f -name *.$(SRCEXT))
# src/Letters/A.cpp
# src/main.cpp


OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS 	:= -g # -Wall
LIB 	:= -pthread
INC 	:= -I include

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@echo $(OBJECTS)
	@echo " $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)
	@echo " ......."

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@echo " Compiling..."
	@mkdir -p $(dir $@)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<


clean:
	@echo " Cleaning..."; 
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; 
	$(RM) -r $(BUILDDIR) $(TARGET)

# Tests
tester:
	$(CC) $(CFLAGS) test/tester.cpp $(INC) $(LIB) -o bin/tester

# Spikes
ticket:
	$(CC) $(CFLAGS) spikes/ticket.cpp $(INC) $(LIB) -o bin/ticket

.PHONY: clean
