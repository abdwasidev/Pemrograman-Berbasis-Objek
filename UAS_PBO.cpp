 // LIBRARY
// =====================================================
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
// =====================================================

// PARENT CLASS
// =====================================================
class GoResto{
    public:
	    int ID;
	    string Nama;
	    string Kategori;
	    float harga;
	
};
// =====================================================

// CHILD CLASS
// =====================================================
class RestoMenu: public GoResto {
    
	public:
	    
	    RestoMenu(){
	        Nama = "";
	        Kategori = "";
	        harga = 0;
	        ID = 0;
	    }
	    
	    RestoMenu(string name, string category, float price, int id){
	        Nama = name;
	        Kategori = category;
	        harga = price;
	        ID = id;
	    }
	    
	    RestoMenu(int id, string name, string category, float price){
	        this -> Nama = name;
	        this -> Kategori = category;
	        this -> harga = price;
	        this -> ID = id;
	    }
	    
	    RestoMenu(const RestoMenu & obj){
	        this -> ID = obj.ID;
	        this -> Nama = obj.Nama;
	        this -> Kategori = obj.Kategori;
	        this -> harga = obj.harga;
	    }
	    
	    void print(){
	        cout << " ID Menu\t: " << ID << endl;
	        cout << " Nama Menu\t: " << Nama << endl;
	        cout << " Kategori\t: " << Kategori << endl;
	        cout << " Harga\t\t: Rp." << harga << endl;
	        cout << endl << endl;
	        
	    }
	    
	    void setNama(string);
	    string getNama();
	    void setKategori(string);
	    string getKategori();
	    void setId();
	    int getId();
	    void setHarga(float);
	    float getHarga();
	    void close();
	    void intro();
};
// =====================================================

// STRUCT && LINKEDLIST
// =====================================================
struct Node {
    RestoMenu menu;
    Node *next;
};

Node *head, *tail;

void firstNode(Node *head, Node *tail, RestoMenu menu) {
    head->menu = menu;
    head->next = NULL;
    tail = head;
}


void appendNode(Node *head, RestoMenu _menu) {
    Node *newNode = new Node;
    newNode->menu = _menu;
    newNode->next = NULL;
    
    Node *current = head;   
    while (current){
        if (current->next == NULL){
            current->next = newNode;
            return;
        }
        current = current->next;
    }
}

void displayList(struct Node *head){
	Node *linkedlist = head;
	
	while(linkedlist){
		linkedlist->menu.print();
		linkedlist=linkedlist->next;
	}
}
// =====================================================

// SET && GET METHOD
// =====================================================
void RestoMenu::setNama(string name) {
    Nama = name;
}

string RestoMenu::getNama() {
    return Nama;
}


void RestoMenu::setKategori(string category) {
    Kategori = category;
}


string RestoMenu::getKategori() {
    return Kategori;
}


void RestoMenu::setId() {
    int MIN_VALUE = 0000;
    int MAX_VALUE = 9999;
    ID = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}

int RestoMenu::getId(){
    return ID;
}


void RestoMenu::setHarga(float price){
    harga = price;
}

float RestoMenu::getHarga(){
    return harga;
}
// =====================================================

// OTHER
// =====================================================
void RestoMenu::close(){
	exit(0);
}

void RestoMenu::intro(){
	
	printf("*********************************************************************************************************\n");
	printf("*********************************************************************************************************\n");
	printf("*************                                                                               *************\n");
	printf("*************                          Author: Abdul Wasi\' Al-Afif                          *************\n");
	printf("*************                                                                               *************\n");
	printf("*********************************************************************************************************\n");
	printf("*********************************************************************************************************\n");
}
// =====================================================

// MAIN FUNCTION
// =====================================================
int main(){
	system("cls");

	char kembali;
	int i = 0, select;
	
    RestoMenu menuRestoran[15];
    
    menuRestoran[0].setNama("TAKOYAKI MENTAI");
	menuRestoran[1].setNama("TAKOYAKI ORIGINAL");
	menuRestoran[2].setNama("HOT SPICY CHICKEN TERIYAKI");
	menuRestoran[3].setNama("HOT SPICY BEEF TERIYAKI");
	menuRestoran[4].setNama("CHICKEN STEAK ORIGINAL");
	menuRestoran[5].setNama("CHICKEN TERIYAKI");
	menuRestoran[6].setNama("BEEF TERIYAKI");
	menuRestoran[7].setNama("CHICKEN YAKINIKU");
	menuRestoran[8].setNama("ICE AVOCADO COFFEE");
	menuRestoran[9].setNama("ICED COFFEE MILK");
	menuRestoran[10].setNama("KOORI KONYAKU CHOCOLATE");
	menuRestoran[11].setNama("KOORI KONYAKU STRAWBERRY");
	menuRestoran[12].setNama("COLD OCHA");
	menuRestoran[13].setNama("LEMON TEA");
	menuRestoran[14].setNama("MILO");
    
    menuRestoran[0].setKategori("Makanan");
    menuRestoran[1].setKategori("Makanan");
    menuRestoran[2].setKategori("Makanan");
    menuRestoran[3].setKategori("Makanan");
    menuRestoran[4].setKategori("Makanan");
    menuRestoran[5].setKategori("Makanan");
    menuRestoran[6].setKategori("Makanan");
    menuRestoran[7].setKategori("Makanan");
    menuRestoran[8].setKategori("Minuman");
    menuRestoran[9].setKategori("Minuman");
    menuRestoran[10].setKategori("Minuman");
    menuRestoran[11].setKategori("Minuman");
    menuRestoran[12].setKategori("Minuman");
    menuRestoran[13].setKategori("Minuman");
    menuRestoran[14].setKategori("Minuman");
    
    menuRestoran[0].setHarga(39999);
    menuRestoran[1].setHarga(37999);
    menuRestoran[2].setHarga(34999);
    menuRestoran[3].setHarga(44999);
    menuRestoran[4].setHarga(33999);
    menuRestoran[5].setHarga(29999);
    menuRestoran[6].setHarga(39999);
    menuRestoran[7].setHarga(28999);
    menuRestoran[8].setHarga(39999);
    menuRestoran[9].setHarga(3499);
    menuRestoran[10].setHarga(24999);
    menuRestoran[11].setHarga(24999);
    menuRestoran[12].setHarga(7999);
    menuRestoran[13].setHarga(10999);
    menuRestoran[14].setHarga(9999);
    
    for (int i = 0; i < 15; i++) {
        menuRestoran[i].setId();
    }
    
    struct Node *head = new Node;
    
    for (int i = 0; i < 15; i++){
        if (i == 0){
		    firstNode(head, tail, RestoMenu(menuRestoran[i].getId(), menuRestoran[i].getNama(), 
		    menuRestoran[i].getKategori(), menuRestoran[i].getHarga()));
		}
		if ( i > 0) {
		    appendNode(head, RestoMenu(menuRestoran[i].getId(), menuRestoran[i].getNama(), 
		    menuRestoran[i].getKategori(), menuRestoran[i].getHarga()));
		}
	}
	
	while(1){
		system("cls");
		menuRestoran[i].intro();
		printf("\n\n MAIN MENU:");
		printf("\n [1]. Display Data");
		printf("\n [2]. Close");
		printf("\n Input Pilihan Nomor Menu : ");
		scanf("%d", &select);
		switch(select){
			case 1:
				system("cls");
				cout << " Menampilkan Data Menu Restoran\n" << endl << endl;
				displayList(head);
				printf("\n");
			break;
			case 2:
				menuRestoran[i].close();
				printf("\n");
			break;
			default:printf("\n Mohon Maaf Pilihan Anda Tidak Termasuk Dalam Menu!");
			break;		}

		printf("\n =====================================\n");
		printf(" Ingin kembali ke menu pilihan? (Y/T): ");
		scanf("%c", &kembali); scanf("%c", &kembali);

	}
    
    return 0;
}
// =====================================================
