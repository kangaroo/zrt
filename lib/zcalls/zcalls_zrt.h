/*
 * zcalls_zrt.h
 * Implementation of whole syscalls, every zcall coming from zlibc
 *
 * Copyright (c) 2012-2013, LiteStack, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ZCALLS_ZRT_H__
#define __ZCALLS_ZRT_H__

#include "zvm.h"

#include <sys/stat.h> //mode_t

/*timeval must be accessible from both zcalls_zrt, zcalls_prolog*/
struct timeval*         static_timeval();

/*save brk value before memory syscall handlers was setted up*/
void*                   static_prolog_brk();

/*get static object from zrtsyscalls.c*/
struct MountsPublicInterface* transparent_mount();

#endif //__ZCALLS_ZRT_H__
