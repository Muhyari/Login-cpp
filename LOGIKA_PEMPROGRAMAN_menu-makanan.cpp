#include <iostream>
using namespace std;

float hasil_jumlah_pesanan(float jumlah, float harga) {
	float harga_akhir = jumlah * harga;
	return harga_akhir;
}

float hasil_total_kembalian(float uang_user, float jumlah_harga) {
	float total_kembalian  =  uang_user - jumlah_harga;
	return total_kembalian;
}

int main(){
	
	float jumlah_harga, harga, uang_user, total_kembalian;
	int pilihan_menu, pilihan_nama_menu, jumlah_pesanan;
	
	while (true) {
		cout << "=====WARUNG C++=====\n";
		cout << "1.MAKANAN\n2.MINUMAN\n3.SAYURAN\n4.BUAH - BUAHAN\nMASUKAN PILIHAN ANDA [1-4] : ";
		cin >> pilihan_menu;
		
		if (pilihan_menu == 1) {
			cout << "\n1.SATE AYAM\n2.NASI GORENG\n3.AYAM PANGGANG\n4.NASI PADANG\nMASUKAN PILIHAN ANDA [1-4] : ";
			
			cin >> pilihan_nama_menu;
			
			if (pilihan_nama_menu == 1) {
				cout << "anda memesan SATE AYAM dengan Harga 18000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 18000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = hasil_total_kembalian(uang_user, jumlah_harga);
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n";
				break;
				
			} else if (pilihan_nama_menu == 2) {
				cout << "anda memesan NASI GORENG dengan Harga 24000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 24000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else if (pilihan_nama_menu == 3) {
				cout << "anda memesan AYAM PANGGANG dengan Harga 16000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 16000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else if (pilihan_nama_menu == 4) {
				cout << "anda memesan AYAM PANGGANG dengan Harga 20000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 20000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else {
				cout << "PILIHAN TIDAK TERSEDIA!"; 
				continue;
			}
		} else if (pilihan_menu == 2) {
			cout << "\n1.TEH ES\n2.ES KELAPA\n3.AIR PUTIH\n4.SIRUP\nMASUKAN PILIHAN ANDA [1-4] : ";
			
			cin >> pilihan_nama_menu;
			
			if (pilihan_nama_menu == 1) {
				cout << "anda memesan TEH ES dengan Harga 3000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 3000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = hasil_total_kembalian(uang_user, jumlah_harga);
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n";
				break;
				
			} else if (pilihan_nama_menu == 2) {
				cout << "anda memesan ES KELAPA dengan Harga 7000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 7000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
					
			} else if (pilihan_nama_menu == 3) {
				cout << "anda memesan AIR PUTIH dengan Harga 1000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 1000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else if (pilihan_nama_menu == 4) {
				cout << "anda memesan SIRUP dengan Harga 2000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 2000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else {
				cout << "PILIHAN TIDAK TERSEDIA!"; 
				continue;
			}
		} else if (pilihan_menu == 3) {
			cout << "\n1.WALUH\n2.TIMUN\n3.KANGKUNG\n4.BAYAM\nMASUKAN PILIHAN ANDA [1-4] : ";
			
			cin >> pilihan_nama_menu;
			
			if (pilihan_nama_menu == 1) {
				cout << "anda memesan WALUH dengan Harga 5000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 5000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = hasil_total_kembalian(uang_user, jumlah_harga);
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n";
				break;
				
			} else if (pilihan_nama_menu == 2) {
				cout << "anda memesan TIMUN dengan Harga 7000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 7000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
					
			} else if (pilihan_nama_menu == 3) {
				cout << "anda memesan KANGKUNG dengan Harga 3000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 3000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else if (pilihan_nama_menu == 4) {
				cout << "anda memesan BAYAM dengan Harga 8000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 8000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else {
				cout << "PILIHAN TIDAK TERSEDIA!"; 
				continue;
			}
		} else if (pilihan_menu == 4) {
			cout << "\n1.BUAH NAGA\n2.SEMANGKA\n3.MANGGA\n4.ALPUKAT\nMASUKAN PILIHAN ANDA [1-4] : ";
			
			cin >> pilihan_nama_menu;
			
			if (pilihan_nama_menu == 1) {
				cout << "anda memesan BUAH NAGA dengan Harga 5000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 5000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = hasil_total_kembalian(uang_user, jumlah_harga);
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n";
				break;
				
			} else if (pilihan_nama_menu == 2) {
				cout << "anda memesan SEMANGKA dengan Harga 16000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 16000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
					
			} else if (pilihan_nama_menu == 3) {
				cout << "anda memesan MANGGA dengan Harga 6000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 6000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else if (pilihan_nama_menu == 4) {
				cout << "anda memesan ALPUKAT dengan Harga 4000\n";
				cout << "Masukan Jumlah Pesanan anda : ";
				cin >> jumlah_pesanan;
				harga = 4000;
				jumlah_harga = hasil_jumlah_pesanan(jumlah_pesanan, harga);
				cout << "Harga Pesanan anda RP" << jumlah_harga << endl;
				cout << "Masukan uang anda : ";
				cin >> uang_user;
				
				if (uang_user < jumlah_harga) {
					cout << "Pesanan anda di batalkan!";
					break;
				}
				
				total_kembalian = uang_user - jumlah_harga;
				cout << "Uang Kemblian anda RP" << total_kembalian;
				cout << "\nTerima Kasih sudah Memesan di WARUNG C++\n\n";
				break;
					
			} else {
				cout << "PILIHAN TIDAK TERSEDIA!"; 
				continue;
			}
		} else {
			cout << "PILIHAN TIDAK TERSEDIA!";
			continue;
		}
	}
}

