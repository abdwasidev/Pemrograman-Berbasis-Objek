#include <iostream>
 
using namespace std;

int main(){
	char back;
	
	do {
		float result;
		
		PrismaSegitiga prisma;
		float a	= prisma.alas;
		float ts = prisma.tinggiSegitiga;
		float tp = prisma.tinggiPrisma;
		
				
		printf("\n == Input Data ================== \n");
		printf(" Alas: ");
		scanf("%f", &a);
		printf(" Tinggi Segitiga: ");
		scanf("%f", &ts);
		printf(" Tinggi Prisma: ");
		scanf("%f", &tp);
		
		result = ((a * ts) : 2) * tp;
		
		printf("\n == Result ====================== \n");
		printf(" Volume Prisma\t: %0.2f \n", result);
		
		printf(" ==================================\n");
		printf(" Ingin input data lagi? (Y/T): ");
		scanf("%c", &kembali); scanf("%c", &kembali);
		
	} while(back == 'y' || back == 'Y');
	
	return 0;
}

class PrismaSegitiga {
	public:
		float alas;
		float tinggiSegitiga;
		float tinggiPrisma;
};
