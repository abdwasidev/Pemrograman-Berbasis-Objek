#include <iostream>
#include <math.h>
 
using namespace std;

class PrismaSegitiga {
	public:
		float alas, tinggiPrisma;
};

class Segitiga {
	public:
		float sisiA, sisiB, tinggiAB;
		
		float segitiga(){
			printf("\n == Input Data Segitiga  ========== \n");
			printf(" Panjang\t: ");
			scanf("%f", &sisiA);
			printf(" Lebar\t\t: ");
			scanf("%f", &sisiB);
			
			tinggiAB = sqrt((sisiA * sisiA) - (sisiB * sisiB));
			
			return tinggiAB;
		}
};

int main(){
	char back;
	
	do {
		system("cls");
		printf(" ==================================\n");
		printf(" ===== Volume Prisma Segitiga =====\n");
		printf(" ==================================\n\n");
		printf(" == ABDUL WASI' AL-AFIF\n");
		printf(" == 20081010165\n");
		
		float a, ts, tp, result;
		
		PrismaSegitiga prisma;
		Segitiga segitiga;
		
		a = prisma.alas;
		ts = segitiga.segitiga();
		tp = prisma.tinggiPrisma;
		
		printf("\n == Input Data Prisma ============= \n");
		printf(" Alas\t\t: ");
		scanf("%f", &a);
		printf(" Tinggi Prisma\t: ");
		scanf("%f", &tp);
		
		result = ((a * ts) / 2) * tp;
		
		printf("\n == Result ======================== \n");
		printf(" Volume Prisma\t: %0.2f \n", result);
		
		printf("\n ==================================\n");
		printf(" Ingin input data lagi? (Y/T): ");
		scanf("%c", &back); scanf("%c", &back);
		
	} while(back == 'y' || back == 'Y');
	
	return 0;
}

