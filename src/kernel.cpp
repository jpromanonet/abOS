// We start by declaring the main kernel function of abOS

// And creating our own printf command for the UI
void printf(char* str)
{
    (unsigned short*)
}

void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    // Just a test message
    printf("Hellow World! | abOS by Juan P. Romano | https://jpromano.net");

    // We use a infinit loop becase we don't want our kernel to stop
    while(1);
}