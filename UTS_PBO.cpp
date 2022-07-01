// LIBRARY
// =====================================================
#include<iostream>
#include<stdlib.h>
#include <string>
 
using namespace std;

// CLASS
// =====================================================
class RestoMantap{
	struct node {
		int id;
		string name;
		struct node *next;
	} *head, *tail, *ptr;
	
    private:
		int id_menu;
        string menu_paket;
        string menu_makanan;
        string menu_minuman;
        float harga;
    public:
		int tambah_menu(RestoMantap *p,int n);
        void daftar_menu();
		int ubah_menu(RestoMantap *p, int item, int n);
		int hapus_menu(RestoMantap *p, int n, int item);
		void cari_menu(RestoMantap *p, int item, int n);
		void close();
};

// DECLARE CLASS
// =====================================================
int RestoMantap :: tambah_menu(RestoMantap *p, int n){
		
	printf(" ID Menu: ");
    scanf("%d", &p[n].id_menu);
    printf(" Nama Menu: ");
	fflush(stdin);
    scanf("%s", &p[n].menu_paket);
    printf(" Makanan: ");
	fflush(stdin);
    scanf("%s", &p[n].menu_makanan);
    printf(" Minuman: ");
	fflush(stdin);
    scanf("%s", &p[n].menu_minuman);
    printf(" Harga: ");
    scanf("%f", &p[n].harga);
        
    printf("\n Data Menu sudah disimpan !\n");
    
    n++;
    return n;
        
    
}

void RestoMantap :: daftar_menu(){
	printf(" ID Menu\t: %d \n", id_menu);
	printf(" Nama Menu\t: %s \n", &menu_paket);
	printf(" Makanan\t: %s \n", &menu_makanan);
	printf(" Minuman\t: %s \n", &menu_minuman);
	printf(" Harga\t\t: Rp. %0.2f \n", harga);
		
}

int RestoMantap :: ubah_menu(RestoMantap *p, int item, int n){
    int i,ch1;
	for(i = 0; i < n; i++){
		if(p[i].id_menu == item){
	    	while(1){
	    		printf(" UBAH DATA:");
				printf("\n [1]. Ubah Makanan");
				printf("\n [2]. Ubah Minuman");
				printf("\n [3]. Ubah Harga");
				printf("\n [4]. Ubah Poin 1-3");
				printf("\n [5]. Kembali ke Main Menu");
				printf("\n\n Input Pilihan Nomor Menu : ");
				scanf("%d", &ch1);
				switch(ch1){
					case 1:
						printf(" Makanan: ");
						fflush(stdin);
						scanf("%s", &p[n].menu_makanan);
						printf("\n Data Menu sudah diubah !\n");
					break;
					case 2:
						printf(" Minuman: ");
						fflush(stdin);
						scanf("%s", &p[i].menu_minuman);
						printf("\n Data Menu sudah diubah !\n");
					break;
					case 3:
						printf(" Harga: ");
						scanf("%f", &p[i].harga);
						printf("\n Data Menu sudah diubah !\n");
					break;
					case 4:
					    printf(" Makanan: ");
						fflush(stdin);
					    scanf("%s", &p[i].menu_makanan);
					    printf(" Minuman: ");
						fflush(stdin);
					    scanf("%s", &p[i].menu_minuman);
					    printf(" Harga: ");
					    scanf("%f", &p[i].harga);
						printf("\n Data Menu sudah diubah !\n");  
					break;
					case 5:
						return n;
					break;
					default:printf("\n Mohon Maaf Pilihan Anda Salah!");
						break;
					}
				}
				break;
	    	}
		}
		
    if(p[i].id_menu != item){
    	printf("\n Data Menu tidak ditemukan !\n");
	}
}

int RestoMantap :: hapus_menu(RestoMantap *p, int n, int item){
	int j = 0, k, flag=0;
	for(j = 0; j < n; j++){
		if(p[j].id_menu == item){
            flag = 1;
            break;
        }
	} if(flag == 1) {
        for(k = j; k < n; k++) {
        	p[k] = p[k+1];
        }
            printf("\n Data Menu sudah dihapus !\n");
            return n-1;
    } else {
		printf("\n Data Menu tidak ditemukan !\n");
		return n;
	}
}

void RestoMantap :: cari_menu(RestoMantap *p, int item, int n){
	int i = 0;
	for(i = 0; i < n; i++){
		if(p[i].id_menu == item){
			printf("Data Menu ditemukan !\n");
			
			printf(" ID Menu\t: %d \n", &p[i].id_menu);
			printf(" Nama Menu\t: %s \n", &p[i].menu_paket);
			printf(" Makanan\t: %s \n", &p[i].menu_makanan);
			printf(" Minuman\t: %s \n", &p[i].menu_minuman);
			printf(" Harga\t\t: Rp. %0.2f \n\n", &p[i].harga);
			
			break;
		}
	}
	
	printf("\n Data Menu tidak ditemukan !\n");
}

void RestoMantap :: close(){
	exit(0);
}

// MAIN FUNCTION
// =====================================================
int main(){
	system("cls");

	char kembali;
	
	RestoMantap menu[10];
 	int i = 0, ch, j, item;

	// Menu
	// =================================================
	while(1){
		system("cls");
		printf("===============================================================================================\n");
		printf("===============================================================================================\n");
		printf("== PROGRAM MENU RESTORAN ======================================================================\n");
		printf("== \"RESTOMANTAP\" ==============================================================================\n");
		printf("===============================================================================================\n");
		printf("== ABDUL WASI\' AL-AFIF ========================================================================\n");
		printf("== ( 20081010165 ) ============================================================================\n");
		printf("===============================================================================================\n");
		printf("===============================================================================================\n");

		printf("\n MAIN MENU:");
		printf("\n [1]. Tambah Menu");
		printf("\n [2]. Daftar Menu");
		printf("\n [3]. Ubah Menu");
		printf("\n [4]. Hapus Menu");
		printf("\n [5]. Cari Menu");
		printf("\n [6]. Keluar");
		printf("\n\n Input Pilihan Nomor Menu : ");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				i = menu[0].tambah_menu(menu,i);
				printf("\n");
			break;
			case 2:
				for(j = 0; j < i; j++){
					menu[j].daftar_menu();
				}
				printf("\n");
			break;
			case 3:
				printf(" Input ID Menu yang diubah: ");
				scanf("%d", &item);
				i = menu[0].ubah_menu(menu, item, i);
			break;
			case 4:
				printf(" Input ID Menu yang dihapus: ");
				scanf("%d", &item);
				i = menu[0].hapus_menu(menu, i,item);
			break;
			case 5:
				printf(" Input ID Menu yang dicari: ");
				scanf("%d", &item);
				menu[0].cari_menu(menu, item, i);
			break;
			case 6:
				menu[0].close();
				printf("\n");
			break;
			default:printf("\n Mohon Maaf Pilihan Anda Tidak Termasuk Dalam Menu!");
			break;		}

		printf(" =====================================\n");
		printf(" Ingin kembali ke menu pilihan? (Y/T): ");
		scanf("%c", &kembali); scanf("%c", &kembali);

	}

	return 0;
}
