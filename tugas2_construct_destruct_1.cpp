#include <iostream>
#include <math.h>
 
using namespace std;

class PrismaSegitiga {
	public:
		// ATRIBUT
		float a, tp, ts, result;
		
		
		// METHOD
		PrismaSegitiga(){
			printf("\n == Input Data ==================== \n");
			printf(" Alas\t\t: ");
			scanf("%f", &a);
			printf(" Tinggi Segitiga: ");
			scanf("%f", &ts);
			printf(" Tinggi Prisma\t: ");
			scanf("%f", &tp);
			
			
			printf("\n constructor <1> called \n");
		}
		
		PrismaSegitiga(float a_, float ts_,  float tp_){
			a = a_;
			ts = ts_;
			tp = tp_;
		}
		
		~PrismaSegitiga(){
			printf(" destructor called \n\n");
		}
		
		void alas(){
			printf(" Alas\t\t: %0.2f \n", a);
		}
		
		void tinggiSegitiga(){
			printf(" Tinggi Segitiga: %0.2f \n", ts);
		}
		
		void tinggiPrisma(){
			printf(" Tinggi Prisma\t: %0.2f \n", tp);
		}
		
		void volume(){
			result = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", result);
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
		
		PrismaSegitiga volumePrisma; // constructor execute
		
		{
			PrismaSegitiga prismaVolume; // constructor of prisma execute
			{
				printf(" Ini Volume Prisma Segitiga \n");
			}
		} // destructor of prisma execute
		
		volumePrisma.alas();
		volumePrisma.tinggiSegitiga();
		volumePrisma.tinggiPrisma();
		volumePrisma.volume();
		
		printf("\n ==================================\n");
		printf(" Ingin input data lagi? (Y/T): ");
		scanf("%c", &back); scanf("%c", &back);
		
	} while(back == 'y' || back == 'Y');
	
	return 0;
} // destructor of prisma execute

