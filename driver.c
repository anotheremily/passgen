/*
 * driver.c
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

#include "passgen.h"

int parameter( char * );

int main( int argv, char *argc[] ) {
	int num = 10;
	int length = 8;
	int strength = MEDIUM;
	int idx;
	int error;
	
	if( argv > 1 ) {
		for( idx = 1; idx < argv; idx++ ) {
			if( argc[idx][0] == '-' ) {
				switch( argc[idx][1] ) {
					case 's' : strength = parameter( argc[idx] );
						break;
					case 'n' : num = parameter( argc[idx] );
						break;
					case 'l' : length = parameter( argc[idx] );
						break;
					default: strength = -1;
						break;
				}
			}
			else {
				error = 1;
			}
		}
		if( error == 1 || strength == -1 || num == -1 || length == -1 ) {
			printf( "There was an error processing your parameters\n" );
			printf( "Valid input is:\n" );
			printf( "\t-n=<number of passwords>\n" );
			printf( "\t-l=<length of password>\n" );
			printf( "\t-s=<strength 1 being weakest and 4 being strongest>\n" );
			exit( 1 );
		}
	}
	intro();
	printf( "NUM: %d", num );
	printf( " LENGTH: %d", length );
	printf( " STRENGTH %d\n", strength );	
	passgen( num, length, strength ); 
	return 0;
}

int parameter( char *arg ) {
	int value = 1; /* initial value of error */
	int lcv;
	int index = 0;
	int record = 0;
	char temp[50];
	 
	if( strlen( arg ) ) {
		for( lcv = 0; lcv < strlen( arg ); lcv++ ) {
			if( record ) {
				temp[ index ] = arg[ lcv ];
				index++;
			}
			if( arg[ lcv ] == '=' )
				record = 1;
		}
		temp[ index ] = '\0';
		//printf( "xx %s x %dx", temp, strlen( temp ) );
		value = strtol( temp, NULL, 10 );
	}
	else {
		printf( "Error resolving parameters.\n" );
		value = -1;
	}
	return value;
}
