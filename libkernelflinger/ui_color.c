/*
 * Copyright (c) 2016, Intel Corporation
 * All rights reserved.
 *
 * Authors:  Jeremy Compostella <jeremy.compostella@intel.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer
 *      in the documentation and/or other materials provided with the
 *      distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <efi.h>
#include <efilib.h>
#include <ui.h>

EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_BLACK	= { 0, 0, 0, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_WHITE	= { 255, 255, 255, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_LIGHTGRAY = { 127, 127, 127, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_LIGHTRED  = { 0, 0, 127, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_YELLOW	= { 0, 255, 255, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_RED	= { 0, 0, 255, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_GREEN	= { 0, 255, 0, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_HIGHLIGHT	= { 157, 106, 0, 0 };
EFI_GRAPHICS_OUTPUT_BLT_PIXEL	COLOR_ORANGE	= { 0, 157, 255, 0 };
