#define	NSYSMON_ENVSYS	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NSYSMON_ENVSYS
 .global _KERNEL_OPT_NSYSMON_ENVSYS
 .equiv _KERNEL_OPT_NSYSMON_ENVSYS,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NSYSMON_ENVSYS\n .global _KERNEL_OPT_NSYSMON_ENVSYS\n .equiv _KERNEL_OPT_NSYSMON_ENVSYS,0x1\n .endif");
#endif
