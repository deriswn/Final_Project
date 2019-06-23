#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;
int main ()
{

   int cidr, nilaisubnet, nilaimask, broadcast, bit;
   unsigned int range,host;
   short int akhir, x=0,z=0,w=0,v=0,k=0;
   
   // WELCOME
   cout << "Selamat datang di tugas akhir C++, ini adalah program perhitungan subnet......" << endl;
   cout << "Masukkan nilai CIDR : ";
   cin >> cidr;

   //ini adalah logika false jika hasil inputan adalah 31/32/0
   //atau tidak sesuai dengan ketentuan table CIDR
   if (cidr==31 || cidr==32 || cidr==0) {
     cout << "Maaf, CIDR "<< cidr <<" tidak sesuai dengan ketentuan." << endl;
	 cout << "Silahkan masukkan nilai yang VALID!!!!!!!!!!!!!" << endl;

   } else if (cidr <=30 && cidr>=24) {

    // jika nilai input sesuai maka akan dilakukan proses jumlah bit (kurang dari sama 30 dan lebih dari sama dengan 24) dikurangi input nilai CIDR
	// dan perhitungan nilai subnet
    bit = 32 - cidr;
    nilaisubnet = pow (2, bit);
    nilaimask = 256 - nilaisubnet;

	// menampilkan CIDR, nilai subnet dan jumlah host
    cout << endl << "Maka subnet mask dari nilai CIDR /" << cidr <<" adalah 255.255.255." << nilaimask << endl;
    cout << "Range network untuk CIDR tersebut adalah " << nilaisubnet << " IP" << endl;
    host = nilaisubnet - 2;
    cout << "Jumlah host yang bisa anda gunakan adalah " << host << " IP" << endl << endl;
    system("read");
    cout << "Contoh range networknya adalah : " << endl;

	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana x adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
       cout << "192.168.1." << x << "/" << cidr;
       x = x + nilaisubnet;
       broadcast = x - 1;
       cout << " - 192.168.1." << broadcast << endl;
    } while (x<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana z adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
       cout << "192.168.2." << z << "/" << cidr;
       z = z + nilaisubnet;
       broadcast = z - 1;
       cout << " - 192.168.2." << broadcast << endl;
    } while (z<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana w adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
       cout << "192.168.3." << w << "/" << cidr;
       w = w + nilaisubnet;
       broadcast = w - 1;
       cout << " - 192.168.3." << broadcast << endl;
    } while (w<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana v adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
       cout << "192.168.4." << v << "/" << cidr;
       v = v + nilaisubnet;
       broadcast = v - 1;
       cout << " - 192.168.4." << broadcast << endl;
    } while (v<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana k adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
       cout << "192.168.5." << k << "/" << cidr;
       k = k + nilaisubnet;
       broadcast = k - 1;
       cout << " - 192.168.5." << broadcast << endl;
    } while (k<=255);
    cout << "Dan seterusnyaaaa......" << endl;
    system("read");

	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana y adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu y kurangi 3
    cout << endl << "Contoh IP yang bisa dipakai adalah : " << endl;
    short int y=1, b=1, c=1, d=1,e=1;
    do {
        cout << "192.168.1." << y;
        y = y + nilaisubnet;
        akhir = y - 3;
        cout << " - 192.168.1." << akhir << endl;
    } while (y<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana b adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu b kurangi 3
    do {
        cout << "192.168.2." << b;
        b = b + nilaisubnet;
        akhir = b - 3;
        cout << " - 192.168.2." << akhir << endl;
    } while (b<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana c adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu c kurangi 3
    do {
        cout << "192.168.3." << c;
        c = c + nilaisubnet;
        akhir = c - 3;
        cout << " - 192.168.3." << akhir << endl;
    } while (c<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana d adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu d kurangi 3
	do {
        cout << "192.168.4." << d;
        d = d + nilaisubnet;
        akhir = d - 3;
        cout << " - 192.168.4." << akhir << endl;
    } while (d<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana e adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu e kurangi 3
	do {
        cout << "192.168.5." << e;
        e = e + nilaisubnet;
        akhir = e - 3;
        cout << " - 192.168.5." << akhir << endl;
    } while (e<255);
	cout << "Dan seterusnyaaaa......" << endl;

	} else if (cidr <24 && cidr >=16) {

	// jika nilai input sesuai maka akan dilakukan proses jumlah bit (kurang dari 24 dan lebih dari sama dengan 16) dikurangi input nilai CIDR
	// dan perhitungan nilai subnet
    bit = 24 - cidr;
    nilaisubnet = pow (2, bit);
    nilaimask = 256 - nilaisubnet;

	// menampilkan CIDR, nilai subnet dan jumlah host
    cout << "\nMaka subnet mask dari nilai CIDR /" << cidr << " adalah 255.255." << nilaimask << ".0" << endl;
    range = pow (2, (32 - cidr));
    cout << "Range network untuk CIDR tersebut adalah " << range << " IP" << endl;
    host = (pow (2, (32 - cidr))) - 2;
    cout << "Jumlah host yang bisa anda gunakan adalah " << host << " IP" << endl << endl;
    system("read");
    cout << "Contoh range networknya adalah : " << endl;

	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana x adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "172.16." << x << ".0/" << cidr;
        x = x + nilaisubnet;
        broadcast = x - 1;
        cout << " - 172.16." << broadcast << ".255" << endl;
    } while (x<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana z adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "172.17." << z << ".0/" << cidr;
        z = z + nilaisubnet;
        broadcast = z - 1;
        cout << " - 172.17." << broadcast << ".255" << endl;
    } while (z<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana w adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "172.18." << w << ".0/" << cidr;
        w = w + nilaisubnet;
        broadcast = w - 1;
        cout << " - 172.18." << broadcast << ".255" << endl;
    } while (w<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana v adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "172.19." << v << ".0/" << cidr;
        v = v + nilaisubnet;
        broadcast = v - 1;
        cout << " - 172.19." << broadcast << ".255" << endl;
    } while (v<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana k adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "172.20." << k << ".0/" << cidr;
        k = k + nilaisubnet;
        broadcast = k - 1;
        cout << " - 172.20." << broadcast << ".255" << endl;
    } while (k<=255);
    cout << "Dan seterusnyaaaa......" << endl;
    system("read");

	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana y adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu y kurangi 1
    cout << endl << "Contoh IP yang bisa dipakai adalah : " << endl;
    short int y=1, b=1, c=1, d=1,e=1;
    do {
        cout << "172.16." << y << ".1";
        y = y + nilaisubnet;
        akhir = y - 1;
        cout << " - 172.16." << akhir << ".254" << endl;
    } while (y<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana b adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu b kurangi 1
    do {
        cout << "172.17." << b << ".1";
        b = b + nilaisubnet;
        akhir = b - 1;
        cout << " - 172.17." << akhir << ".254" << endl;
    } while (b<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana c adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu c kurangi 1
    do {
        cout << "172.18." << c << ".1";
        c = c + nilaisubnet;
        akhir = c - 1;
        cout << " - 172.18." << akhir << ".254" << endl;
    } while (c<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana d adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu d kurangi 1
    do {
        cout << "172.19." << d << ".1";
        d = d + nilaisubnet;
        akhir = d - 1;
        cout << " - 172.19." << akhir << ".254" << endl;
    } while (d<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana e adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu e kurangi 1
    do {
        cout << "172.20." << e << ".1";
        e = e + nilaisubnet;
        akhir = e - 1;
        cout << " - 172.20." << akhir << ".254" << endl;
    } while (e<255);
    cout << "Dan seterusnyaaaa......" << endl;

   } else if (cidr <16 && cidr >=8) {

    // jika nilai input sesuai maka akan dilakukan proses jumlah bit (kurang dari 16 dan lebih dari sama dengan 8) dikurangi input nilai CIDR
	// dan perhitungan nilai subnet
    bit = 16 - cidr;
    nilaisubnet = pow (2, bit);
    nilaimask = 256 - nilaisubnet;

	// menampilkan CIDR, nilai subnet dan jumlah host
    cout << "\nMaka subnet mask dari nilai CIDR /" << cidr << " adalah 255." << nilaimask << ".0.0" << endl;
    range = pow (2, (32 - cidr));
    cout << "Range network untuk CIDR tersebut adalah " << range << " IP" << endl;
    host = (pow (2, (32 - cidr))) - 2;
    cout << "Jumlah host yang bisa anda gunakan adalah " << host << " IP" << endl << endl;
    system("read");

	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana x adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    cout << "Contoh range networknya adalah : " << endl;
    do {
        cout << "10." << x << ".0.0/" << cidr;
        x = x + nilaisubnet;
        broadcast = x - 1;
        cout << " - 10." << broadcast << ".255.255" << endl;
    } while (x<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana z adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "11." << z << ".0.0/" << cidr;
        z = z + nilaisubnet;
        broadcast = z - 1;
        cout << " - 11." << broadcast << ".255.255" << endl;
    } while (z<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana w adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "12." << w << ".0.0/" << cidr;
        w = w + nilaisubnet;
        broadcast = w - 1;
        cout << " - 12." << broadcast << ".255.255" << endl;
    } while (w<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana v adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "13." << v << ".0.0/" << cidr;
        v = v + nilaisubnet;
        broadcast = v - 1;
        cout << " - 13." << broadcast << ".255.255" << endl;
    } while (v<=255);
	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana k adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    do {
        cout << "14." << k << ".0.0/" << cidr;
        k = k + nilaisubnet;
        broadcast = k - 1;
        cout << " - 14." << broadcast << ".255.255" << endl;
    } while (k<=255);
    cout << "Dan seterusnyaaaa......" << endl;
    system("read");

	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana y adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu y kurangi 1
    cout << endl << "Contoh IP yang bisa dipakai adalah : " << endl;
    short int y=1, b=1, c=1, d=1,e=1;
    do {
       cout << "10." << y << ".0.1";
       y = y + nilaisubnet;
       akhir = y - 1;
       cout << " - 10." << akhir << ".255.254" << endl;
    } while (y<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana b adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu b kurangi 1
    do {
       cout << "11." << b << ".0.1";
       b = b + nilaisubnet;
       akhir = b - 1;
       cout << " - 11." << akhir << ".255.254" << endl;
    } while (b<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana c adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu c kurangi 1
    do {
       cout << "12." << c << ".0.1";
       c = c + nilaisubnet;
       akhir = c - 1;
       cout << " - 12." << akhir << ".255.254" << endl;
    } while (c<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana d adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu d kurangi 1
    do {
       cout << "13." << d << ".0.1";
       d = d + nilaisubnet;
       akhir = d - 1;
       cout << " - 13." << akhir << ".255.254" << endl;
    } while (d<255);
	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana e adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu e kurangi 1
    do {
       cout << "14." << e << ".0.1";
       e = e + nilaisubnet;
       akhir = e - 1;
       cout << " - 14." << akhir << ".255.254" << endl;
    } while (e<255);
    cout << "Dan seterusnyaaaa......" << endl;

   } else if (cidr <8 && cidr >0) {

    // jika nilai input sesuai maka akan dilakukan proses jumlah bit (kurang dari 8 dan lebih dari 0) dikurangi input nilai CIDR
	// dan perhitungan nilai subnet
    bit = 8 - cidr;
    nilaisubnet = pow (2, bit);
    nilaimask = 256 - nilaisubnet;

	// menampilkan CIDR, nilai subnet dan jumlah host
    cout << "\nMaka subnet mask dari nilai CIDR /" << cidr << " adalah " << nilaimask << ".0.0.0" << endl;
    range = pow (2, (32 - cidr));
    cout << "Range network untuk CIDR tersebut adalah " << range << " IP" << endl;
    host = (pow (2, (32 - cidr))) - 2;
    cout << "Jumlah host yang bisa anda gunakan adalah " << host << " IP" << endl << endl;
    system("read");

	// ini adalah logika range network dengan menampilkan contoh IP
	// dimana x adalah nilai awal(kurang dari sama dengan 255) yang ditampilkan dan broadcast sebagai nilai akhir
    cout << "Contoh Range networknya adalah : " << endl;
    do {
        cout << x << ".0.0.0/" << cidr;
        x = x + nilaisubnet;
        broadcast = x - 1;
        cout << " - " << broadcast << ".255.255.255" << endl;
    } while (x<=255);
    cout << "Dan seterusnyaaaa......" << endl;
    system("read");

	// ini adalah logika host network dengan menampilkan contoh IP yang bisa dipakai
	// dimana y adalah nilai awal(kurang dari 255) yang ditampilkan dan nilai akhir yaitu y kurangi 1
    cout << endl << "Contoh IP yang bisa dipakai adalah : " << endl;
    short int y=0;
    do {
        cout << y << ".0.0.1";
        y = y + nilaisubnet;
        akhir = y - 1;
        cout << " - " << akhir << ".255.255.254" << endl;
    } while (y<255);
    cout << "Dan seterusnyaaaa......" << endl;

    } else {

	// logika false jika nilai CIDR tidak sesuai dengan ketentuan
    cout << endl << "Maaf, nilai CIDR yang ada masukkan tidak sesuai dengan ketentuan....." << endl;

   }

  system("read");

} 