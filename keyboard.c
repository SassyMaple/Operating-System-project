unsigned char keyboardtest() {
    unsigned char key;
    __asm__ volatile (
        "mov ah, 0\n"
        "int 0x16\n"
        "mov %0, al\n"
        : "=r" (key)
        :
        : "ax"
    );
    return key;
}

