CC = clang
CFLAGS = -Wall -Wextra -std=c11 -g
INCLUDE_DIRS = -Icompiler -Iscanner -Isrc -Ivm -Itable

# List source files
SOURCES = $(wildcard compiler/*.c) $(wildcard scanner/*.c) $(wildcard src/*.c) $(wildcard vm/*.c) $(wildcard table/*.c)
HEADERS = $(wildcard compiler/*.h) $(wildcard scanner/*.h) $(wildcard src/*.h) $(wildcard vm/*.h) $(wildcard table/*.h)
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
