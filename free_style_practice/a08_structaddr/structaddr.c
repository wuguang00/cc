/**************************************************************************
 File Name:     structaddr.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sun 30 Aug 2020 06:47:40 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>

// used for declare the function can be called in this function
struct wdt_regs {
	unsigned int wdt_cr;	    /* 0x00 */
	unsigned int wdt_torr;		/* 0x04 */
	unsigned int wdt_ccvr;		/* 0x08 */
	unsigned int wdt_crr;		/* 0x0c */
	unsigned int wdt_stat;		/* 0x10 */
	unsigned int wdt_eoi;		/* 0x14 */
	unsigned int wdt_plevel;	/* 0x18 */
};

struct wdt_regs *dw_wdt_bases; // used for stack?

int main(void)
{
    struct wdt_regs used_struct = {8, 9, 10, 11, 12, 13, 14};
    dw_wdt_bases = &used_struct; // used to transfer a value to address.

    int a;
    int b;

    printf("address &dw_wdt_bases: 0x%0.8x\n", &dw_wdt_bases);
    printf("address &dw_wdt_bases: 0x%0.8x\n", &used_struct);

    // why the address doesn't match with the above one.
    printf("address &dw_wdt_bases->wdt_cr:     0x%0.8x\n", &dw_wdt_bases->wdt_cr     );
    printf("address &dw_wdt_bases->wdt_torr:   0x%0.8x\n", &dw_wdt_bases->wdt_torr   );
    printf("address &dw_wdt_bases->wdt_ccvr:   0x%0.8x\n", &dw_wdt_bases->wdt_ccvr   );
    printf("address &dw_wdt_bases->wdt_crr:	   0x%0.8x\n", &dw_wdt_bases->wdt_crr    );
    printf("address &dw_wdt_bases->wdt_stat:   0x%0.8x\n", &dw_wdt_bases->wdt_stat   );
    printf("address &dw_wdt_bases->wdt_eoi:	   0x%0.8x\n", &dw_wdt_bases->wdt_eoi    );
    printf("address &dw_wdt_bases->wdt_plevel: 0x%0.8x\n", &dw_wdt_bases->wdt_plevel );

    printf("address &dw_wdt_bases->wdt_cr:     %0.8d\n", dw_wdt_bases->wdt_cr    );
    printf("address &dw_wdt_bases->wdt_torr:   %0.8d\n", dw_wdt_bases->wdt_torr  );
    printf("address &dw_wdt_bases->wdt_ccvr:   %0.8d\n", dw_wdt_bases->wdt_ccvr  );
    printf("address &dw_wdt_bases->wdt_crr:	   %0.8d\n", dw_wdt_bases->wdt_crr   );
    printf("address &dw_wdt_bases->wdt_stat:   %0.8d\n", dw_wdt_bases->wdt_stat  );
    printf("address &dw_wdt_bases->wdt_eoi:	   %0.8d\n", dw_wdt_bases->wdt_eoi   );
    printf("address &dw_wdt_bases->wdt_plevel: %0.8d\n", dw_wdt_bases->wdt_plevel);

    return 0;
}

