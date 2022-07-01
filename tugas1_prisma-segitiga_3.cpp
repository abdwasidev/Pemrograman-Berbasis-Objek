#include <iostream>
#include <math.h>
 
using namespace std;

class PrismaSegitiga {
	public:
		float a, tp, sisiA, sisiB, ts, result;
		
		float segitiga(){
			printf("\n == Input Data Segitiga  ========== \n");
			printf(" Panjang\t: ");
			scanf("%f", &sisiA);
			printf(" Lebar\t\t: ");
			scanf("%f", &sisiB);
			
			ts = sqrt((sisiA * sisiA) - (sisiB * sisiB));
			
			return ts;
		}
		
		void prisma(){
			printf("\n == Input Data Prisma ============= \n");
			printf(" Alas\t\t: ");
			scanf("%f", &a);
			printf(" Tinggi Prisma\t: ");
			scanf("%f", &tp);
		}
		
		float prismaSegitiga(){
			result = ((a * ts) / 2) * tp;
			
			return result;
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
		
		prisma.segitiga();
		
		prisma.prisma();
		
		result = prisma.prismaSegitiga();
		
		printf("\n == Result ======================== \n");
		printf(" Volume Prisma\t: %0.2f \n", result);
		
		printf("\n ==================================\n");
		printf(" Ingin input data lagi? (Y/T): ");
		scanf("%c", &back); scanf("%c", &back);
		
	} while(back == 'y' || back == 'Y');
	
	return 0;
}

