.section .text
.extern kernelMain
.global loader

loader:
    mov $kernel_stack, %esp


.section .bss
.space 2*1024*1024; #2 Mib

kernel_stack:
