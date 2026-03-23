#include "constants.h"


int rownum = 0;
int colnum = 0;



void display_character(char c){

    char* video_memory = (char*) VIDEO_MEMORY;
    unsigned int cursor = rownum * VGA_WIDTH + colnum;

    video_memory[cursor * 2] = c;
    video_memory[cursor * 2 + 1] = white_on_black;

    colnum++;
    if (colnum >= VGA_WIDTH) {
        colnum = 0;
        rownum++;
    }
}


