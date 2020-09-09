/**************************************************************************
 File Name:     uint8.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Wed 12 Aug 2020 04:24:32 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

#define foreach_cmd(cmdp) for (cmdp = __cmd_array_start; cmdp < __cmd_array_end; cmdp++)

typedef unsigned short int uint8_t;

int cmd_get_data_size(char * arg, int default_size)
{
    switch (arg[0]){
    case 'b':
        return 1;
    case 'w':
        return 2;
    case 'l':
        return 4;
    case 'q':
        return 8;
    default:
        return -1;
    }
    return default_size;
}

typedef struct {
    const char *name;  /* command name */
    int (*cmd)(int argc, char *argv[]);
    const char *help;  /* short description */
    const char *usage; /* long description */
} cmd_tbl;
static cmd_tbl *find_cmd(const char *cmd) // a function return pointer type of cmd_tbl
{
    cmd_tbl *cmdp;
    foreach_cmd(cmdp) {
        if (strcmp(cmdp->name, cmd))
            continue;
        return cmdp;
    }
    return NULL;
}
int main(void)
{
    unsigned int a;
    char * arg; // a char pointer can be used to store the string.

    arg = "qb";

    printf("%c\n", arg[0]); // print by character, when use a string you should use it like this.
    printf("%c\n", arg[1]); // print by character
    // get familiar the codes firstly. then to debug on the soc, on the VDK and so on.

    a = cmd_get_data_size(arg, 4);

    printf("the return value from the codes. int: %0.8x\n", a);

    return 0;
}






