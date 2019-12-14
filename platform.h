
/*============================================================================

This C header file is part of the SoftFloat IEEE Floating-Point Arithmetic
Package, Release 3e, by John R. Hauser.

Copyright 2011, 2012, 2013, 2014, 2015, 2016, 2017 The Regents of the
University of California.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice,
    this list of conditions, and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions, and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

 3. Neither the name of the University nor the names of its contributors may
    be used to endorse or promote products derived from this software without
    specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS "AS IS", AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ARE
DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=============================================================================*/

#include <sys/types.h>
#include <sys/endian.h>
/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/
#if _BYTE_ORDER == _LITTLE_ENDIAN
#define LITTLEENDIAN 1
#endif

/*----------------------------------------------------------------------------
*----------------------------------------------------------------------------*/
#define INLINE static inline

// INLINE_LEVEL 0: softfloat.kmod 155kB
// INLINE_LEVEL 1: softfloat.kmod 155kB
// INLINE_LEVEL 2: softfloat.kmod 148kB
// INLINE_LEVEL 3: softfloat.kmod 147kB
// INLINE_LEVEL 4: softfloat.kmod 146kB
// INLINE_LEVEL 5: softfloat.kmod 146kB

#define SOFTFLOAT_FAST_INT64
#define SOFTFLOAT_ROUND_ODD
#define INLINE_LEVEL 5
#define SOFTFLOAT_FAST_DIV32TO16
#define SOFTFLOAT_FAST_DIV64TO32
