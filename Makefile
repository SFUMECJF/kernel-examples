KVERS = $(shell uname -r)

obj-m += hello.o
#EXTRA_CFLAGS=-G -OO
build:kernel_modules
kernel_modules:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) modules
clean:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) modules