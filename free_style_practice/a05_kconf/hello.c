/**************************************************************************
 File Name:     hello.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Mon 17 Aug 2020 05:47:01 PM CST
 Release Notes: use goto to transfer from A point to B point.
 **************************************************************************/
#include<stdio.h>
#include"autoconf.h"
#include"myprint.h"

#include <stdlib.h>
#include <string.h>
 
// static struct schedule_mailbox mailbox[NR_CPUS];
// 
// struct schedule_mailbox* schedule_get_mb(int cpu)
// {
// 	return &mailbox[cpu];
// }
// 
// void schedule_mailbox_log(const char *format, ...)
// {
// 	va_list arg;
// 
// 	unsigned int cpu = smp_processor_id();
// 	struct schedule_mailbox* mb= schedule_get_mb(cpu);
// 
// 	va_start(arg, format);
// 	vsnprintf((char*)(mb->log), sizeof(mb->log), format, arg);
// 	va_end(arg);
// }
// 
// void schedule_mailbox_check()
// {
// 	int i, flag = 0;
// 
// 	for (i = 0; i < NR_CPUS; i++) {
// 		if (mailbox[i].status0 == 1 && mailbox[i].status1 == 1) {
// 			mailbox[i].status0 = 0;
// 			mailbox[i].status1 = 0;
// 			flag = 1;
// 			printf("[cpu%d] %s", i, mailbox[i].log);
// 		}
// 	}
// 
// 	for (i = 0; i < NR_CPUS; i++) {
// 		if (mailbox[i].status0 == 1) {
// 			break;
// 		}
// 	}
// 
// 	if (flag == 1 && i == NR_CPUS) {
// 		schedule_end_transcation();
// 	}
// }
// 
// static struct cpu_exec_test* find_case(int id)
// {
// 	struct cpu_exec_test* test;
// 
// 	int nr_tests = ((uintptr_t)__testfn_end -
// 			(uintptr_t)__testfn_start) /
// 		       sizeof (struct cpu_exec_test);
// 
// 	if (id < 0 || id > nr_tests) {
// 		printf("err, id invalid\n");
// 		return (struct cpu_exec_test*)0;
// 	}
// 
// 	return (struct cpu_exec_test*)__testfn_start + id;
// }
// 
// int exec_case(int id, void *arg)
// {
// 	struct cpu_exec_test* test;
// 
// 	test = find_case(id);
// 	if (test == 0) {
// 		printf("err, id too large\n");
// 		return -1;
// 	}
// 
// 	test->func(arg);
// 
// 	return  0;
// }
// 
// static void *_heap;
// void schedule_start_transcation()
// {
// 	/* save heap ptr,
// 	 * will be restored after current dispatch finished
// 	 */
// 	_heap = heap_save_current();
// 
// 	/* clean mailbox */
// 	for (int i = 0; i < NR_CPUS; i++) {
// 		mailbox[i].status0 = 0;
// 		mailbox[i].status1 = 0;
// 	}
// }
// 
// void schedule_end_transcation()
// {
// 	heap_restore(_heap);
// }
// 
// void schedule_notify_taskended()
// {
// 	mailbox[smp_processor_id()].status1 = 1;
// 	sgi_send(cpus_boot_cpu, IPI_ACK);
// }
// 
// /*
//  * schedule cpumask caseid
//  */
// int schedule_case(int argc, char *argv[])
// {
// 	void *p;
// 	int id, i=0;
// 	uint32_t cpumask;
// 	struct cpu_exec_test* test;
// 
// 	if (argc != 3)
// 		return -1;
// 
// 	id = strtoul(argv[2], NULL, 0);
// 
//     printf("schedule_case launched.");
// 
// 	return 0;
// }
// 
// MK_CMD(schedule, schedule_case, "schedule case to cpu",
// 	"schedule cpumask caseid\n"
// 	"	 - cpumask: bit_n present cpu_n\n"
// 	"	 - caseid: 0,1,2...\n"
// );
// 
// 
//
//

typedef unsigned int __int32;
typedef __int32 UINT32; // one by one.
typedef UINT32  UINTN;
typedef UINTN uintptr_t;

typedef struct {
    const char *name;  /* command name */
    int (*cmd)(int argc, char *argv[]);
    const char *help;  /* short description */
    const char *usage; /* long description */
} cmd_tbl;

#define MK_CMD(name, cmd, help, usage) \
    int cmd(int, char *[]); \
    static const cmd_tbl __cmd_array_##name __attribute__((used,section(".cmd_array."#name))) = {#name, cmd, help, usage}
// put the attribute to assigned section. The main effect's you can 


int case_list(int argc, char *argv[])
{
    printf("argc: %d\n", argc);
	printf("example: nothing, just print.\n");
    puts("HELLO WORLD.\n");
    puts("HELLO WORLD.\n");
    puts("HELLO WORLD.\n");
	return 0;
}

MK_CMD(caselist, case_list, "list available test cases", "listcase\n"); // added ; at the end of the line.

// void myprint(void)
// {
//     printf("This is my test!\n");
//     printf("A function called from external from main() function.\n");
//     schedule_case("schedule",); // if you want to run it sequence.
// 
// }
// 
void main(void) 
{
    printf("ABCD\n");

    goto abcd;
    printf("EEEEEEEEEEEEEEEEE.\n"); // this clause will not be executed due to a goto clause is used.
    // in this case.

aaaa:
    printf("FFFFFFFFFFFFFFFFFFFFFFF.\n"); // this clause will not be executed due to a goto clause is used.
    goto abcc;
    printf("GGGGGGGGGGGGGGGGGGGGGGGGGGG.\n"); // this clause will not be executed due to a goto clause is used.

#ifdef CONFIG_ARM
    printf("ARM PLATFORM!\n");
#endif

#ifdef CONFIG_x86
    printf("X86 PLATFORM!\n");
#endif

#ifdef CONFIG_MYPRINT
    myprint();
#endif


abcd:
    printf("abcd tags place..\n");
    goto aaaa;

abcc:
    printf("The end of the main function.\n");

    char ** c;
    int * t;
    void * ppp;
    char * bb[] = {"efg", "b"}; // define an array like this to store strings

    ppp = c;
    ppp = t;
    c = bb;

    case_list(1, bb); // the function can called by array.
    printf("help infomation: %s\n", __cmd_array_caselist.help);

    unsigned int a1;
    unsigned int a2;

    a1 = 15;
    a2 = 9;
    printf("%d\n", a1&a2);
    printf("Just a test.");

    return ;

}


