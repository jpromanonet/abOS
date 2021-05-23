.section .text
.extern kernelMain
.global loader

loader:
    mov $kernel_stack, %esp