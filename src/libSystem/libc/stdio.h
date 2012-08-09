#ifndef LIBC_STDIO_H
#define LIBC_STDIO_H
#include <cstdio>
#include <stdarg.h>

/* stdio buffers */
struct __darwin_sbuf
{
        unsigned char   *_base;
        int             _size;
};

// Unfortunately, putc_nolock depends on FILE's layout,
// so we need to wrap linux's FILE with darwin's layout.
typedef struct __darwin_sFILE
{
  unsigned char *_p;      /* current position in (some) buffer */
  int     _r;             /* read space left for getc() */
  int     _w;             /* write space left for putc() */
  // TODO(hamaji): we need to modify this value with ferror and feof...
  short   _flags;         /* flags, below; this FILE is free if 0 */
  short   _file;          /* fileno, if Unix descriptor, else -1 */
  struct  __darwin_sbuf _bf;     /* the buffer (at least 1 byte, if !NULL) */
  int     _lbfsize;       /* 0 or -_bf._size, for inline putc */

#if 0
  /* operations */
  void    *_cookie;       /* cookie passed to io functions */
  int     (*_close)(void *);
  int     (*_read) (void *, char *, int);
  fpos_t  (*_seek) (void *, fpos_t, int);
  int     (*_write)(void *, const char *, int);

  /* separate buffer for long sequences of ungetc() */
  struct  __sbuf _ub;     /* ungetc buffer */
  struct __sFILEX *_extra; /* additions to FILE to not break ABI */
  int     _ur;            /* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
  unsigned char _nbuf[1]; /* guarantee a getc() buffer */

  /* separate buffer for fgetln() when line crosses buffer boundary */
  struct  __sbuf _lb;     /* buffer for fgetln() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int     _blksize;       /* stat.st_blksize (may be != _bf._size) */
  fpos_t  _offset;        /* current lseek offset (see WARNING) */

#endif

  FILE* linux_fp;
} __darwin_FILE;

extern "C"
{

__darwin_FILE* __darwin_fopen(const char* path, const char* mode);
__darwin_FILE* __darwin_fdopen(int fd, const char* mode);
__darwin_FILE* __darwin_freopen(const char* path, const char* mode, __darwin_FILE* fp);
int __darwin_fclose(__darwin_FILE* fp);
size_t __darwin_fread(void* ptr, size_t size, size_t nmemb, __darwin_FILE* fp);
size_t __darwin_fwrite(void* ptr, size_t size, size_t nmemb, __darwin_FILE* fp);
int __darwin_fseek(__darwin_FILE* fp, long offset, int whence);
long __darwin_ftell(__darwin_FILE* fp);
void __darwin_rewind(__darwin_FILE* fp);
int __darwin_getc(__darwin_FILE* fp);
int __darwin_fgetc(__darwin_FILE* fp);
int __darwin_ungetc(int c, __darwin_FILE* fp);
char* __darwin_fgets(char* s, int size, __darwin_FILE* fp);
int __darwin_putc(int c, __darwin_FILE* fp);
int __darwin_fputc(int c, __darwin_FILE* fp);
int __darwin_fputs(const char* s, __darwin_FILE* fp);
int __darwin_fprintf(__darwin_FILE* fp, const char* fmt, ...);
int __darwin_vfscanf(__darwin_FILE* fp, const char* fmt, va_list ap);
int __darwin_fscanf(__darwin_FILE* fp, const char* fmt, ...);
int __darwin_vfprintf(__darwin_FILE* fp, const char* fmt, va_list ap);
int __darwin_fflush(__darwin_FILE* fp);
void __darwin_setbuf(__darwin_FILE* fp, char* buf);
void __darwin_setbuffer(__darwin_FILE* fp, char* buf, size_t size);
int __darwin_ferror(__darwin_FILE* fp);
int __darwin_fileno(__darwin_FILE* fp);
__darwin_FILE* __darwin_tmpfile();

// extra func
char *__darwin_realpath(const char *path, char *resolved_path);

}

#endif
