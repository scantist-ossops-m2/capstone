# CS_ARCH_AARCH64, 0, None
0x00,0x0a,0x31,0xd5 = mrs	x0, TRCRSR
0x80,0x08,0x31,0xd5 = mrs	x0, TRCEXTINSELR
0x80,0x08,0x31,0xd5 = mrs	x0, TRCEXTINSELR
0x80,0x09,0x31,0xd5 = mrs	x0, TRCEXTINSELR1
0x80,0x0a,0x31,0xd5 = mrs	x0, TRCEXTINSELR2
0x80,0x0b,0x31,0xd5 = mrs	x0, TRCEXTINSELR3
0x00,0x0a,0x11,0xd5 = msr	TRCRSR, x0
0x80,0x08,0x11,0xd5 = msr	TRCEXTINSELR, x0
0x80,0x08,0x11,0xd5 = msr	TRCEXTINSELR, x0
0x80,0x09,0x11,0xd5 = msr	TRCEXTINSELR1, x0
0x80,0x0a,0x11,0xd5 = msr	TRCEXTINSELR2, x0
0x80,0x0b,0x11,0xd5 = msr	TRCEXTINSELR3, x0