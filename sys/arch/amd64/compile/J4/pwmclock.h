#define	NPWMCLOCK	0
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_NPWMCLOCK
 .global _KERNEL_OPT_NPWMCLOCK
 .equiv _KERNEL_OPT_NPWMCLOCK,0x0
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_NPWMCLOCK\n .global _KERNEL_OPT_NPWMCLOCK\n .equiv _KERNEL_OPT_NPWMCLOCK,0x0\n .endif");
#endif
