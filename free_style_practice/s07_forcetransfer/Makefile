MAKEFLAGS := -B

# %.c, it will search the file with suffix .c
all: forcetran.c
	gcc $< -o $@.out
	./$@.out
clean:
	rm -rf all
