CC := gcc
CFLAGS := -Wall -g
SOURCES := $(wildcard src/*.c)
OBJECTS := $(SOURCES:.c=.o)
EXECUTABLE := grocery-expiry-engine

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test_unit: $(EXECUTABLE)
	./$(EXECUTABLE) --test-unit

test_integration: $(EXECUTABLE)
	./$(EXECUTABLE) --test-integration

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)
