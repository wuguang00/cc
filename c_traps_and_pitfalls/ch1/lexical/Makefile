MAKEFLAGS = -B
# %.c, it will search the file with suffix .c

all: main.c
	gcc $< -o $@
	-./$@ # It will report error. I don't know why. '-' will ignore this error

clean:
	rm -rf all

