#define	NCH	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NCH
 .global _KERNEL_OPT_NCH
 .equiv _KERNEL_OPT_NCH,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NCH\n .global _KERNEL_OPT_NCH\n .equiv _KERNEL_OPT_NCH,0x1\n .endif");
#endif
