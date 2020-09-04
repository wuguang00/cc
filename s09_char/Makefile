# This case contain a special rules for makefile about :: and :.
MAKEFLAGS := -B
# %.c, it will search the file with suffix .c

# The two will be executed.
all:: char.c
	gcc $< -o $@
	./$@

all:: chars.c
	gcc $< -o $@
	./$@

# # The second will be executed.
# all: char.c
# 	gcc $< -o $@
# 	./$@
# 
# all: chars.c
# 	gcc $< -o $@
# 	./$@

clean:
	rm -rf all
