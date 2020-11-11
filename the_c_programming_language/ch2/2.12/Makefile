
# If comment for below command, it won't compile if the *.c is older than target.
MAKEFLAGS = -B

# %.c, it will search the file with suffix .c

all.out: *.c
	@echo $(MAKE)
	gcc $< -o $@
	./$@

clean:
	rm -rf all

