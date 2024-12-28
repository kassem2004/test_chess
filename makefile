CC = gcc
CFLAGS = -Wall -O2
SOURCES = src/main.c src/uci.c src/board.c src/movegen.c
OBJECTS = $(SOURCES:.c=.o)
EXEC = chess_engine

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(EXEC)
