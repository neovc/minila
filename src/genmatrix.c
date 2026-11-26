/* Utility to build keyboard matrix to K375s matrix, 2026.11 */
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>

#include "keyboard.h"

#define MATRIX_FN "matrix.h"

/* minila's matrix -> k375s matrix (row<<4|col) */

uint8_t
find_match(int k)
{
	int i, j;
	uint8_t r;

	if (k <= HID_KEY_NONE ) return 0;
	for (i = 0; i < 13; i ++) {
		for (j = 0; j < 10; j ++) {
			if (k375s_matrix[i][j] == k) {
				r = ((j + 1) << 4) | (i + 1);
				return r;
			}
		}
	}
	return 0;
}

int main(void)
{
	int i, j;
	uint8_t k;
	FILE *fp;

	fp = fopen(MATRIX_FN, "wb+");
	if (fp == NULL) {
		printf("can't open file %s\n", MATRIX_FN);
		return 1;
	}

	printf("writing map matrix to %s\n", MATRIX_FN);

	fprintf(fp, "uint8_t\nr_minila_k375s[13][8] =\n{\n");
	for (i = 0; i < 13; i ++) {
		fprintf(fp, "\t{");
		for (j = 0; j < 8; j ++) {
			k = find_match(r_minila_matrix[i][j]);
			if (j == 7)
				fprintf(fp, "0x%0X", k);
			else
				fprintf(fp, "0x%0X, ", k);
			if (k == 0 && r_minila_matrix[i][j] != 0) {
				printf("can't find match for r_minila[%d][%d]\n", i+1, j+1);
			}
		}
		fprintf(fp, "},\n");
	}
	fprintf(fp, "};\n\n");

	fprintf(fp, "uint8_t\nr_fn_minila_k375s[13][8] =\n{\n");
	for (i = 0; i < 13; i ++) {
		fprintf(fp, "\t{");
		for (j = 0; j < 8; j ++) {
			k = find_match(r_fn_minila_matrix[i][j]);
			if (j == 7)
				fprintf(fp, "0x%0X", k);
			else
				fprintf(fp, "0x%0X, ", k);
			if (k == 0 && r_fn_minila_matrix[i][j] != 0) {
				printf("can't find match for r_fn_minila[%d][%d]\n", i+1, j+1);
			}
		}
		fprintf(fp, "},\n");
	}

	fprintf(fp, "};\n");

	fprintf(fp, "\nuint8_t\nmr_minila_k375s[11][8] =\n{\n");
	for (i = 0; i < 11; i ++) {
		fprintf(fp, "\t{");
		for (j = 0; j < 8; j ++) {
			k = find_match(mr_minila_matrix[i][j]);
			if (j == 7)
				fprintf(fp, "0x%0X", k);
			else
				fprintf(fp, "0x%0X, ", k);
			if (k == 0 && mr_minila_matrix[i][j] != 0) {
				printf("can't find match for mr_minila[%d][%d]\n", i+1, j+1);
			}
		}
		fprintf(fp, "},\n");
	}
	fprintf(fp, "};\n\n");

	fprintf(fp, "uint8_t\nmr_fn_minila_k375s[11][8] =\n{\n");
	for (i = 0; i < 11; i ++) {
		fprintf(fp, "\t{");
		for (j = 0; j < 8; j ++) {
			k = find_match(mr_fn_minila_matrix[i][j]);
			if (j == 7)
				fprintf(fp, "0x%0X", k);
			else
				fprintf(fp, "0x%0X, ", k);
			if (k == 0 && mr_fn_minila_matrix[i][j] != 0) {
				printf("can't find match for mr_fn_minila[%d][%d]\n", i+1, j+1);
			}
		}
		fprintf(fp, "},\n");
	}

	fprintf(fp, "};\n\n");

	fprintf(fp, "uint8_t\nconvertiable2_k375s[15][8] =\n{\n");
	for (i = 0; i < 15; i ++) {
		fprintf(fp, "\t{");
		for (j = 0; j < 8; j ++) {
			k = find_match(convertiable2_tkl_matrix[i][j]);
			if (j == 7)
				fprintf(fp, "0x%0X", k);
			else
				fprintf(fp, "0x%0X, ", k);
			if (k == 0 && convertiable2_tkl_matrix[i][j] != 0) {
				printf("can't find match for convertiable2_tkl_matrix[%d][%d]\n", i+1, j+1);
			}
		}
		fprintf(fp, "},\n");
	}

	fprintf(fp, "};\n");
	fclose(fp);
	return 0;
}
