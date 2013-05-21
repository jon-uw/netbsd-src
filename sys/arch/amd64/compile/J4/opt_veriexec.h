#define	VERIFIED_EXEC_FP_RMD160	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_RMD160
 .global _KERNEL_OPT_VERIFIED_EXEC_FP_RMD160
 .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_RMD160,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_RMD160\n .global _KERNEL_OPT_VERIFIED_EXEC_FP_RMD160\n .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_RMD160,0x1\n .endif");
#endif
#define	VERIFIED_EXEC_FP_MD5	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_MD5
 .global _KERNEL_OPT_VERIFIED_EXEC_FP_MD5
 .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_MD5,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_MD5\n .global _KERNEL_OPT_VERIFIED_EXEC_FP_MD5\n .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_MD5,0x1\n .endif");
#endif
#define	VERIFIED_EXEC_FP_SHA512	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA512
 .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA512
 .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA512,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA512\n .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA512\n .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA512,0x1\n .endif");
#endif
#define	VERIFIED_EXEC_FP_SHA384	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA384
 .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA384
 .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA384,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA384\n .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA384\n .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA384,0x1\n .endif");
#endif
#define	VERIFIED_EXEC_FP_SHA256	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA256
 .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA256
 .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA256,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA256\n .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA256\n .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA256,0x1\n .endif");
#endif
#define	VERIFIED_EXEC_FP_SHA1	1
#ifdef _LOCORE
 .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA1
 .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA1
 .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA1,0x1
 .endif
#else
__asm(" .ifndef _KERNEL_OPT_VERIFIED_EXEC_FP_SHA1\n .global _KERNEL_OPT_VERIFIED_EXEC_FP_SHA1\n .equiv _KERNEL_OPT_VERIFIED_EXEC_FP_SHA1,0x1\n .endif");
#endif