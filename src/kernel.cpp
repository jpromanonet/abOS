// We start by declaring the main kernel function of abOS

// And creating our own printf command for the UI
void printf(char* str)
{
    unsigned short* VideoMemory = (unsigned short*)0xb000;

    for(int i = 0; str[i] != '\0'; ++i)
        VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
}

void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    // Just a test message
    printf("Hello World! | abOS by Juan P. Romano | https://jpromano.net");

    // We use an endless loop becase we don't want our kernel to stop
    while(1);
}