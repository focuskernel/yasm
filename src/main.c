/* $Id: main.c,v 1.1 2001/05/15 05:24:04 peter Exp $
 * Program entry point, command line parsing, error/warning output functions
 *
 *  Copyright (C) 2001  Peter Johnson
 *
 *  This file is part of YASM.
 *
 *  YASM is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  YASM is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#include <stdio.h>
#include <stdlib.h>

extern int yydebug;

extern int yyparse(void);

unsigned int line_number = 1;
unsigned int mode_bits = 32;

void yyerror(char *s) {
    fprintf(stderr, "%d: %s\n", line_number, s);
}

int main(void) {
    yydebug = 1;
    yyparse();
    return 0;
}

