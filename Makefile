CC := gcc
CFLAGS := -Wall -Wextra
SRCDIR := src
VMDIR := vm
INCLUDES := -I$(SRCDIR) -I$(VMDIR)
SOURCES := $(wildcard $(SRCDIR)/*.c) $(wildcard $(VMDIR)/*.c)
OBJECTS := $(SOURCES:.c=.o)
EXECUTABLE := clox

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
