//
//  Header.h
//  ed_project
//
//  Created by Andy Vera on 3/22/20.
//  Copyright © 2020 Andy Vera. All rights reserved.
//

#ifndef grep_h
#define grep_h
#define    BLKSIZE    4096
#define    FNSIZE    128
#define    LBSIZE    4096
#define    ESIZE    256
#define    GBSIZE    256
#define    NBRA    5
#define    EOF    -1
#define    KSIZE    9

#define    CBRA    1
#define    CCHR    2
#define    CDOT    4
#define    CCL    6
#define    NCCL    8
#define    CDOL    10
#define    CEOF    11
#define    CKET    12
#define    CBACK    14
#define    CCIRC    15

#define    STAR    01

char    Q[]    = "";
char    T[]    = "TMP";
#define    READ    0
#define    WRITE    1
int    peekc;
int    lastc;
char    savedfile[FNSIZE];
char    file[FNSIZE];
char    linebuf[LBSIZE];
char    rhsbuf[LBSIZE/2];
char    expbuf[ESIZE+4];
int    given;
unsigned int    *addr1, *addr2;
unsigned int    *dot, *dol, *zero;
char    genbuf[LBSIZE];
long    count;
char    *nextip;
char    *linebp;
int    ninbuf;
int    io;
int    pflag;
long    lseek(int, long, int);
int    open(char *, int);
int    creat(char *, int);
int    read(int, char*, int);
int    write(int, char*, int);
int    close(int);
int    fork(void);
int    execl(char *, ...);
int    wait(int *);
int    unlink(char *);


int    vflag    = 1;
int    oflag;
int    listf;
int    listn;
int    col;
char    *globp;
int    tfile    = -1;
int    tline;
char    *tfname;
char    *loc1;
char    *loc2;
char    ibuff[BLKSIZE];
int    iblock    = -1;
char    obuff[BLKSIZE];
int    oblock    = -1;
int    ichanged;
int    nleft;
char    WRERR[]    = "WRITE ERROR";
int    names[26];
int    anymarks;
char    *braslist[NBRA];
char    *braelist[NBRA];
int    nbra;
int    subnewa;
int    subolda;
int    fchange;
int    wrapp;
int    bpagesize = 20;
unsigned nlall = 128;

char    *mktemp(char *);
char    tmpXXXXX[50] = "/tmp/eXXXXX";
char *getblock(unsigned int atl, int iof);
char *getline(unsigned int tl);
int advance(char *lp, char *ep);
int append(int (*f)(void), unsigned int *a);
void commands(void);
void compile(int eof);
int execute(unsigned int *addr);
void filename(int comm);
int getchr(void);
int getfile(void);
int getnum(void);
void global(int k);
void init(void);
unsigned int *address(void);
void print(void);
void putchr(int ac);
int putline(void);
void puts(char *sp);
void setwide(void);
#endif /* Header_h */
