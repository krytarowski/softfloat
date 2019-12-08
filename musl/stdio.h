#ifndef _STDIO_H
#define _STDIO_H

#include <sys/types.h>
#include <sys/stdarg.h>

struct _IO_FILE;
typedef struct _IO_FILE FILE;

int softfloat_snprintf(char *, size_t, const char *, ...);

int softfloat_vfprintf(FILE *, const char *, va_list);
int softfloat_vsnprintf(char *, size_t, const char *, va_list);

#endif
