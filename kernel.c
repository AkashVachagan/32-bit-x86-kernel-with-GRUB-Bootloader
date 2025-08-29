#define VGA_ADDRESS 0xB8000

#define BLACK 0
#define GREEN 2
#define RED 4
#define YELLOW 14
#define WHITE_COLOR 15

unsigned short* text_buffer;
unsigned int vga_index; 

void clear_screen(void){
    int index = 0;
    while (index < 25 * 80){
        text_buffer[index] = (unsigned short) ' ' | (BLACK << 8);
        index++;
    }
}

void print_string(char* str, unsigned char color){
    int index = 0;
    while (str[index]){
        text_buffer[vga_index] = (unsigned short) str[index] | (unsigned short) color << 8;
        index++;
        vga_index++;
    }
}

void main(void){
    text_buffer = (unsigned short*) VGA_ADDRESS;
    vga_index = 0;

    clear_screen();
    print_string("The kernel is working!", YELLOW);
    vga_index = 80;  // next line
    print_string("It is a page which can show text in different colours", RED);
}

