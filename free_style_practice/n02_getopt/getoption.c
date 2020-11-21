/**************************************************************************
 File Name:     getoption.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Thu 19 Nov 2020 05:53:12 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

int main(int argc, char *argv[])
{
    char *optstr = "p:n:m:c";
    char *optarg;
    struct option opts[] = {
        {"path",  1, NULL, 'p'},
        {"name",  1, NULL, 'n'},
        {"mtime", 1, NULL, 'm'},
        {"ctime", 1, NULL, 'c'},
        {0, 0, 0, 0}
    }; // when define a struct, you should do it like this way.

    int opt;

    while ((opt = getopt_lon(argc, argv, opts, NULL)) != -1) {
        switch (opt) {
            case 'p': strcpy(path, optarg); break;
            case 'n': strcpy(targetname, optarg); break;
            case 'm': modifiedtime = atoi(optarg); break;
            case 'c': charngetime = atoi(optarg); break;
            case '?':
                if (strchr(optstr, optopt) == NULL) {
                    fprintf(stderr, "unknown option '-%c'\n", optopt);
                }
                else {
                    fprintf(stderr, "options requires an argument '-%c'\n", optopt);
                }
            return 1;
        }
    }

    return 0;
}

