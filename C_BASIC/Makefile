CC := gcc
TARGET := main
CFLAGS := -Wall -Wextra -Werror -std=c99
SRCS := main.c lib.c
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
build: $(SRCS)
	$(CC) $(CFLAGS) $^ -o $(TARGET)
clean:
	rm -f *.o $(TARGET) output.txt
.PHONY: build clean
