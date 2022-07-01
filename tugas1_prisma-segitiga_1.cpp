#include <iostream>
 
using namespace std;

class PrismaSegitiga {
	public:
		float alas;
		float tinggiSegitiga;
		float tinggiPrisma;
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
		a = prisma.alas;
		ts = prisma.tinggiSegitiga;
		tp = prisma.tinggiPrisma;
		
		printf("\n == Input Data ==================== \n");
		printf(" Alas\t\t: ");
		scanf("%f", &a);
		printf(" Tinggi Segitiga: ");
		scanf("%f", &ts);
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

