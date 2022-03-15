.TL
DSE Readme
.AU
HackerSmacker

.NH 1
Intro
.PP
DSE is a save editor for Metroid Dread written in C. Yes, I am very aware that this is a horrible idea. The ultimate goal is to produce an editor that runs directly on the console itself, allowing users to easily manipulate their game from the comfort of anywhere. 

.PP
This is a re-write of the Jan 2022 DSE project. As of right now, this is NOT complete.

.NH 1
Compiling
.PP
DSE will compile on literally anything. Tested systems include:
.IP \[bu] 2
Windows (Cygwin GNU C)
.IP \[bu]
Windows (Microsoft Visual C++)
.IP \[bu]
Linux 5.x (GNU C)
.IP \[bu]
FreeBSD 12.1 (GNU C and Clang)
.IP \[bu]
Mac OS X 10.x and 11.x (Apple Clang)
.IP \[bu]
Other systems: 4.3 BSD UNIX (VAX), Ultrix 4.5 (VAX and MIPS), HP-UX 11.11 (PA-RISC), AIX 5.1 (PowerPC), OSF/1 4.0 (Alpha AXP), VM/370 6.0 (System/370), MVS 3.8 (System/370), VAX/VMS 4.7 (VAX), IRIX 5.3 (MIPS), SunOS 5.9 (x86), UnixWare 7.1 (x86), OS/2 3.0 (x86), MS-DOS 6.22 (8086), Windows NT 4.0 (x86)

.PP
Compiling this is simple. As long as your system has a C compiler "cc" and the make program "make", you can compile this. Simply navigate to the directory where you have downloaded this and run "make". If you are using Cygwin or Msys2, you will have to use "make". If you are using Visual Studio, open a "Developer Command Prompt" for your VS version and navigate to the directory before running "nmake -f Makefile.msvc". If you would like to use OpenWatcom C/C++, use "wmake -f Makefile.watcom". 

.NH 1
Using
.PP
To be documented...
