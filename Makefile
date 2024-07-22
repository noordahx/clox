CC = clang
CFLAGS = -Wall -Wextra -std=c11
INCLUDE_DIRS = -Icompiler -Iscanner -Isrc -Ivm

# List source files
SOURCES = $(wildcard compiler/*.c) $(wildcard scanner/*.c) $(wildcard src/*.c) $(wildcard vm/*.c)
HEADERS = $(wildcard compiler/*.h) $(wildcard scanner/*.h) $(wildcard src/*.h) $(wildcard vm/*.h)
OBJECTS = $(SOURCES:.c=.o)

# Output executables
EXECUTABLE = clox

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(OBJECTS) -o $@

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
