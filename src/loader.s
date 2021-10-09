# Here we tell our bootloader that the OS existe and to fire it up.
.set MAGIC, 0x1badb002
.set FLAGS, (1<<0 | 1<<1)

.section .text
.extern kernelMain
.global loader

loader:
    mov $kernel_stack, %esp+
    call kernelMain

_stop:
    cli
    htl
    jmp _stop

.section .bss
.space 2*1024*1024; #2 Mib

kernel_stack:
