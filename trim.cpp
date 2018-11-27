/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>

void trim (const char* source, char* trimmed_string){
  int countFirst=0;
  int countLast=0;
  strcpy(trimmed_string,"");

  while(source[countFirst]==' '){
    countFirst++;
  }
  while (source[strlen(source)-countLast]==' ') {
    countLast++;
  }
for (int i = countFirst; i < source[strlen(source)-countLast]; i++) {
  trimmed_string[i-countFirst]=source[i];
}

}
