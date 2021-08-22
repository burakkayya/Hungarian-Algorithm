#include <stdio.h>
#include <math.h>
#include <iostream>
#include <time.h>

#define SIZE 10
using namespace std;

void main() {

	int burak = 0, e = 0, f = 0, sayacson = 0, sayacson2 = 0, d = 0, ö = 0, sayacc = 0, tem = 0, diz[20][20];
	int kaya = 0, saya = 0, saya2 = 0, saya3 = 0, temp = 1;
	int say = 0, sum = 0, þ, ç, q, sizesayac = 0, sizesayac2 = 0, u = 0, p = 0, sayac = 0, sayac2 = 0, sayac3 = 0;
	int v = 0, z = 0, s = 0, c = 0, r, h, b = 0, a, sifirsayac = 0, i, t, j, k, min = 0;
	int dizi6[20][20], dizi[20][20], dizi2[20][20], dizi3[20][20], dizi4[SIZE*SIZE], dizi5[SIZE*SIZE];

	srand(time(NULL));

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			dizi[i][j] = 1+ rand() % 100;

		}
	}
	cout << "FIRST ARRAY" << endl;
	cout << endl;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			cout << dizi[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			dizi2[i][j] = dizi[i][j];

		}
	}



	for (i = 0; i < SIZE; i++) {

		min = dizi2[i][0];

		for (j = 0; j < SIZE; j++) {

			if (min > dizi[i][j]) {
				min = dizi[i][j];
			}

		}

		for (k = 0; k < SIZE; k++) {
			dizi2[i][k] = dizi2[i][k] - min;
		}
	}


	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			cout << dizi2[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	for (i = 0; i < SIZE; i++) {

		min = dizi2[0][i];

		for (j = 0; j < SIZE; j++) {

			if (min > dizi2[j][i]) {
				min = dizi2[j][i];
			}

		}

		for (k = 0; k < SIZE; k++) {
			dizi2[k][i] = dizi2[k][i] - min;
		}
	}


	cout << endl;
	cout << endl;

	while (1) {
		min = 0;
		c = 0;
		b = 0;
		s = 0;
		z = 0;
		þ = 0;
		ç = 0;
		d = 0;
		sizesayac = 0;
		sizesayac2 = 0;

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				dizi3[i][j] = dizi2[i][j];

			}
		}

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				cout << dizi3[i][j] << "\t";

			}
			cout << endl;
		}
		cout << endl;
		cout << endl;

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				dizi6[i][j] = dizi2[i][j];

			}
		}

		for (burak = 0; burak < SIZE*SIZE; burak++) {
			for (kaya = 0; kaya < SIZE; kaya++) {
				for (t = 0; t < SIZE; t++) {
					for (i = 0; i < SIZE; i++) {

						sifirsayac = 0;
						for (j = 0; j < SIZE; j++) {

							if (dizi3[i][j] == 0) {
								sifirsayac++;
							}

						}
						a = 1;
						if (sifirsayac == 1) {

							for (j = 0; j < SIZE; j++) {

								if (dizi3[i][j] == 0) {
									sayacc = 0;
									for (ö = 0; ö < þ; ö++) {
										if (dizi4[ö] == j) {
											sayacc++;
										}
									}
									if (sayacc == 0) {

										dizi4[þ] = j;
										þ++;

										for (k = 0; k < SIZE; k++) {
											dizi3[k][j] = -1000;
										}
									}
								}
							}
						}

					}
				}



				for (t = 0; t < SIZE; t++) {
					for (i = 0; i < SIZE; i++) {

						sifirsayac = 0;
						for (j = 0; j < SIZE; j++) {
							
								if (dizi3[j][i] == 0) {
									sifirsayac++;
								}
							
						}
						a = 1;
						if (sifirsayac == 1) {
							for (j = 0; j < SIZE; j++) {
								if (dizi3[j][i] == 0) {
									sayacc = 0;
									for (ö = 0; ö < ç; ö++) {
										if (dizi5[ö] == j)
											sayacc++;
									}
									if (sayacc == 0) {

										dizi5[ç] = j;
										ç++;

										for (k = 0; k < SIZE; k++) {
											dizi3[j][k] = -1000;
										}
									}
								}
							}
						}

					}

				}
			}

			for (e = 0; e < SIZE; e++) {
				sayacson = 0;
				sayacson2 = 0;
				for (f = 0; f < SIZE; f++) {

					if (dizi3[e][f] == 0)
					{
						sayacson++;
					}

				}
				for (t = 0; t < SIZE; t++) {

					if (dizi3[t][e] == 0)
					{
						sayacson2++;
					}

				}

				if (sayacson == sayacson2 && sayacson > 1) {

					sayacc = 0;
					for (ö = 0; ö < þ; ö++) {
						if (dizi4[ö] == e)
							sayacc++;
					}
					if (sayacc == 0) {

						for (k = 0; k < SIZE; k++) {
							dizi4[þ] = e;
							þ++;
							dizi3[k][e] = -1000;
						}
					}
				}
			}

		}
		c = 0;
		b = 0;

		cout << endl;

		cout << "COVERED COLOUMNS" << endl;
		for (i = 0; i < þ; i++) {
			if (dizi4[i] > -1) {
				cout << dizi4[i] << "\t";
				sizesayac++;
			}
		}
		cout << endl;
		cout << endl;
		cout << "COVERED ROWS" << endl;
		for (i = 0; i < ç; i++) {
			if (dizi5[i] > -1) {
				cout << dizi5[i] << "\t";
				sizesayac2++;
			}
		}
		cout << endl;
		cout << endl;
		

		cout << "UNCOVERED" << endl;
		for (i = 0; i < SIZE ; i++) {
			for (j = 0; j < SIZE; j++) {
				if (dizi3[i][j] > -1)
					cout << dizi3[i][j] << "\t";
				else
					cout << "-" << "\t";
			}
			cout << endl;
		}

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				if (dizi3[i][j] > -1) {
					min = dizi3[i][j];
					break;
				}
			}
		}


		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				if (dizi3[i][j] > -1) {
					if (min > dizi3[i][j])
						min = dizi3[i][j];
				}
			}
			
		}
		cout << endl;
		cout << endl;
		if (min != 0)
			cout << "-----> MIN= " << min;
		else
			cout << "-----> MIN= NOT FOUND";
		cout << endl;
		
		cout << endl;

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				sayac = 0;
				for (k = 0; k < þ; k++) {

					if (dizi4[k] == j)
						sayac++;

				}

				sayac2 = 0;
				for (z = 0; z < ç; z++) {

					if (dizi5[z] == i)
						sayac2++;

				}

				if (sayac == 0 && sayac2 == 0 && dizi2[i][j] != 0) {
					dizi2[i][j] = dizi2[i][j] - min;
				}
				else if (sayac != 0 && sayac2 != 0) {
					dizi2[i][j] = dizi2[i][j] + min;
				}

			}

		}


		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				cout << dizi2[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "---------------------------------------------------------------------------" << endl;
		q = sizesayac + sizesayac2;
		if (q >= SIZE) {
			break;
		}
	}
	cout << endl;
	cout << endl;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			diz[i][j] = dizi2[i][j];
		}
	}
	c = 0;
	b = 0;


	for (t = 0; t < SIZE*SIZE; t++) {
		for (i = 0; i < SIZE; i++) {

			for (j = 0; j < SIZE; j++) {
				saya = 0;
				for (z = 0; z < SIZE; z++) {
					if (dizi2[i][z] == 0) {
						saya++;
					}
				}
				if (saya == 1) {
					for (z = 0; z < SIZE; z++) {
						if (dizi2[i][z] == 0) {
							sum = sum + dizi[i][z];
							cout << "WORKER " << i << "  JOB " << z << " ------> Value is= "<<dizi[i][z]<< endl;
							
							b++;
							tem = z;
						}
					}
					for (z = 0; z < SIZE; z++) {

						dizi2[z][tem] = -100;
						dizi2[i][z] = -100;
					}
				}
			}

			for (j = 0; j < SIZE; j++) {
				saya2 = 0;
				for (z = 0; z < SIZE; z++) {
					if (dizi2[z][i] == 0) {
						saya2++;
					}
				}
				if (saya2 == 1) {
					for (z = 0; z < SIZE; z++) {
						if (dizi2[z][i] == 0) {
							sum = sum + dizi[z][i];
							cout << "WORKER " << z << "  JOB " << i << " ------> Value is= "<<dizi[z][i]<< endl;
							
							c++;
							tem = z;
						}
					}

					for (z = 0; z < SIZE; z++) {

						dizi2[tem][z] = -100;
						dizi2[z][i] = -100;

					}
				}

			}

			if (t > SIZE ) {
				if (saya > 1 && saya2 > 1) {

					for (z = 0; z < SIZE; z++) {
						if (dizi2[i][z] == 0) {
							sum = sum + dizi[i][z];
							cout << "WORKER " << i << "  J " << z << " ------> Value is= "<< dizi[i][z]<< endl;
							tem = z;
							break;
						}
					}

					for (z = 0; z < SIZE; z++) {

						dizi2[i][z] = -100;
						dizi2[z][tem] = -100;

					}

				}

			}
		}
	}

	for (i = 0; i < SIZE; i++) {

		for (j = 0; j < SIZE; j++) {

			if (diz[i][j] == 0)
				diz[i][j] = dizi[i][j];

		}
	}

	cout << endl;
	cout << endl;


	cout << "LAST ARRAY" << endl;
	cout << endl;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			cout << diz[i][j] << "\t";

		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	cout << "-----> SUM= "<<sum << endl;
	cout << endl;

	system("PAUSE");
}