#include <iostream>
using namespace std;

int main()

{

	float index1, index2, index3, rerata;

	string status, kota;
    cout << "Masukan Nama Kota : " << endl;
    cin >> kota;
	cout << "Masukan Nilai index1 : " << endl;
	cin >> index1;
	cout << "Masukan nilai index2 :" << endl;
	cin >> index1;
    cout << "Masukan nilai index3 :" << endl;
	cin >> index3;
	rerata = (index1 + index2 + index3) / 3;

	if (rerata >= 75)

	{

		status = "Tidak sehat";

	}

	else if (index1 = 45)

	{

		status = "tidak sehat";

	}
    else if (index2 = 45)

	{

		status = "tidak sehat";

	}
    else if (index3 = 45)

	{

		status = "tidak sehat";

	}

	else

	{

		status = "Sehat";

	}

	cout << "Kota = " << kota << endl;

	cout << "Status  = " << status << endl;
}







// 1
// int umur;
// char nama;
// float hasil;

// //2 
// int pengurangan(int a, int b)
// {
//     return a - b;
// }

// //3 
// for(i = 1; i >= 10; i++) {
//     cout << i;
// }

// //4
// if (matematika >= 70)
// 	{
// 		status = "Lulus";
// 	}
// 	else if (rerata > 60)
// 	{
// 		status = "Lulus";
// 	}else{
// 		status = "Gagal";
// 	}

// //5
// struct mahasiswa {
//     int umur;
//     char nama;
//     int nim;
// }