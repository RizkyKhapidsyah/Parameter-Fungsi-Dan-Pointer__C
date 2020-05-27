#include <stdio.h>
#include <conio.h>

int TAMBAH(int A, int B);

int main() {
	int Hasil;
	Hasil = TAMBAH(2, 3);
	printf("Hasil  = %d", Hasil);

	_getch();
	return 0;
}

int TAMBAH(int A, int B) {
	int C;
	C = A + B;

	{
		float C;
		C = 100;
	}

	return(C);
}

/*
	Hasilnya = 5
	Mengapa tidak 100? Hal ini karena variabel C dideklarasikan di dalam blok sendiri sehingga dianggap berbeda
	dengan variabel C yang berisi nilai 5.
*/