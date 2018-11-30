CC:=gcc
CFLAGS=`pkg-config --cflags gtk+-3.0` -Iinclude
LDFLAGS=`pkg-config --libs gtk+-3.0`

OBJECTS:=\
src/main.o \
src/console.o

all: vm

vm: $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o