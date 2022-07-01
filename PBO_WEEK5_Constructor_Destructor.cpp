#include <iostream>
#include <math.h>
 
using namespace std;

class PrismaSegitiga {
	public:
		float a, tp, ts, result;
		int n;
		
		PrismaSegitiga(){
			n = 1;
			printf("\n constructor ke-%d dipanggil.\n", n);
			
			a = 6;
			ts = 3;
			tp = 13;
			
			float volume = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", volume);
		}
		
		PrismaSegitiga(float a_, float ts_,  float tp_){
			n = 2;
			printf("\n constructor ke-%d dipanggil.\n", n);
			
			a = a_;
			ts = ts_;
			tp = tp_;
			
			float volume = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", volume);
		}
		
		PrismaSegitiga(string name, float a_, float ts_,  float tp_){
			n = 3;
			printf("\n constructor ke-%d dipanggil.\n", n);
			
			a = a_;
			ts = ts_;
			tp = tp_;
			
			float volume = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", volume);
		}
		
		~PrismaSegitiga(){
			printf("\n destructor prisma ke-%d dihapus.\n", n);
		}	
		
		void getVolume(){
			result = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", result);
		}
};

int main(){
	system("cls");
	printf(" ==================================\n");
	printf(" ===== Volume Prisma Segitiga =====\n");
	printf(" ==================================\n\n");
	printf(" == ABDUL WASI' AL-AFIF\n");
	printf(" == 20081010165\n");
	
	PrismaSegitiga volume1;
	PrismaSegitiga volume2(5, 7, 13);
	PrismaSegitiga volume3("Prisma Segitiga", 7, 9, 23);
	
	return 0;
}

