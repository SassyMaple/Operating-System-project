#include "constants.h"
#include "screen.c"
#include "keyboard.c"

void display_str(char *str){
    char* video_memory = (char*) VIDEO_MEMORY;

    for(unsigned int i = 0; str[i] != '\0'; i++) {
        video_memory[i * 2] = str[i];
        video_memory[i * 2 + 1] = white_on_black;
    }
}



void kmain() {
    char* video_memory = (char*) VIDEO_MEMORY;
    for (int i = 0; i < VGA_WIDTH * VGA_HEIGHT; i++) {
        video_memory[i * 2] = '\0';
        video_memory[i * 2 + 1] = white_on_black;
    }

    display_str("Hello, World!");
    
    while (1) {
        unsigned char key = keyboardtest();
        if (key) {
            display_character(key);
        }

    }

}