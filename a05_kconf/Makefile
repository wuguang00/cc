
TARGET=hello
include ./include/config/auto.conf # include is a keyword list used by makefile
LDFLAGS= -I ./include/generated

obj-y := hello.c
obj-$(CONFIG_MYPRINT) += myprint.c

all: $(TARGET)
	echo $(MAKE)
	echo $(MAKE_FLAGS)
	echo $$
	echo $< # dependency
	echo $@ # target.
	

# FORCE is an empty target now.
$(TARGET):$(obj-y) FORCE
	gcc $(LDFLAGS) -o $@ $(obj-y) # only one target with the needed .c file.
	echo "======"$@ # target
	echo "------"$< # dependency.
	echo $(obj-y)

# Use the scripts to automatically generate relevant files. auto.conf maybe
defconfig:
	./scripts/conf Kconfig
	./scripts/conf -s --syncconfig Kconfig

menuconfig:
	./scripts/mconf Kconfig
	./scripts/conf -s --syncconfig Kconfig

clean:
	rm $(TARGET)

PHONY += FORCE

# The below target will overwrite the previous one.
FORCE:
	echo "A=B"
	echo "C=B"

.PHONY: $(PHONY)

include/asm/mach-cortexm4:
	@echo "A special test." # use the path as the target.

all11: $(menuconfig1)
