#include <sys/types.h>

#include "stdio.h"

int softfloat_snprintf(char *s, size_t n, const char *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = softfloat_vsnprintf(s, n, fmt, ap);
	va_end(ap);
	return ret;
}
