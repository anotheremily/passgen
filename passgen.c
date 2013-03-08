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
*/  
#include "passgen.h"
void intro()
{
    printf("Passgen 2.0\n");
    printf("Written by Zach Young\n");
    printf("Copyright 2004, 2005, 2006 Zach Young\n");
    printf("This is free software; see the source for copying conditions.  There is NO\n");
    printf("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\n");
    return;
}

 void passgen(int num, int length, int strength)
{
    int idx;
    srand(time(NULL));
    for (idx = 0; idx < num; idx++) {
        generate(length, strength);
    }
    return;
}

 void generate(int l, int s)
{
    int idx;
    for (idx = 0; idx < l; idx++) {
        printf("%c", getValue(s));
    }
    printf("\n");
    return;
}

 char getValue(int s)
{
    char c;
    int idx;
    int l;
    int o;
    int type = rand() % s;

    switch (type) {
        case 0:
            l = 10;
            o = 48;
            break;
        case 1:
            l = 26;
            o = 97;
            break;
        case 2:
            l = 26;
            o = 65;
            break;
        case 3:
            l = 15;
            o = 33;
            break;
        default:
            l = 26;
            o = 97;
    }
    
	/* get the length (l) and offset (o) for a type of character */ 
	return rand() % l + o;
}


