#ifndef CORE_H
#define CORE_H

#include <sqlite3.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

/* Function declarations */
void OCR_receipt_ingest(char* receipt);
void barcode_hashing(char* barcode);
void SQLite_forecasting(void);
void main_function(void);

#endif // CORE_H