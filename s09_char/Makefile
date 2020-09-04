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

# the function about this below item? Need to check again.
# %::
# 	touch $@
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
