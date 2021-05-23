# Declaring variables
GPPPARAMS = -m32
ASPARAMS = --32
LDPARAMS = -melf_i386

# Creating the loader and kernel objects
objects: loader.o kernel.o

# Now we define the outputs via assembler
%.o: %.cpp
		g++(GPPPARAMS) -o $@ -c $<

%.o: %.s
		as $(ASPARAMS) -o $@ $<

mykernel.bin: linker.ld $(objects)
		ld $(LDPARAMS) -T $< -o $@ $(objects)

# We call mykernel.bin file to be installed by copying it.
install: mykernel.bin
	sudo cp $< /boot/mykernel.bin