/**
 * passgen.h
 * part of the passgen project
 *
 * Copyright 2004, 2005, 2006 Zachary Young
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

/**
 * Password strengths
**/
#define WEAK	   1
#define MEDIUM	   2
#define STRONG	   3
#define VERYSTRONG 4

/**
 * int passgen()
 * Runs the password generation code
**/
void intro();

void passgen(int, int, int);

/**
 * int generate( int l, int s )
 * Generates a password with length of and strength of s
**/
void generate(int, int);

/**
 * int getValue( int s )
 * Generates one random character based on the specified strength
**/
char getValue(int);
