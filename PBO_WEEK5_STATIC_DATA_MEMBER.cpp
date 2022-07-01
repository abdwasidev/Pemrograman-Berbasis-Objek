#include <iostream>
#include <math.h>
 
using namespace std;

class PrismaSegitiga {
    private:
        static int count;
        
	public:
		float a, tp, ts, result;
		int n;
		
		static int counter;
		
		PrismaSegitiga(){
			n = 1;
			printf("\n constructor ke-%d dipanggil.\n", n);
			
			a = 6;
			ts = 3;
			tp = 13;
			
			float volume = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", volume);
			
			counter++;
		}
		
		PrismaSegitiga(float a_, float ts_,  float tp_){
			n = 2;
			printf("\n constructor ke-%d dipanggil.\n", n);
			
			a = a_;
			ts = ts_;
			tp = tp_;
			
			float volume = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", volume);
			
			counter++;
		}
		
		PrismaSegitiga(string name, float a_, float ts_,  float tp_){
			n = 3;
			printf("\n constructor ke-%d dipanggil.\n", n);
			
			a = a_;
			ts = ts_;
			tp = tp_;
			
			float volume = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", volume);
			
			counter++;
		}
		
		~PrismaSegitiga(){
			printf("\n destructor prisma ke-%d dihapus.\n", n);
		}	
		
		void getVolume(){
			result = ((a * ts) / 2) * tp;
			printf(" Volume Prisma\t: %0.2f \n", result);
		}
		
		static int getCount(){
        	return count++;
		}
};

int PrismaSegitiga::counter = 0;
int PrismaSegitiga::count = 0;

int main(){
	system("cls");
	printf(" ==================================\n");
	printf(" ===== Volume Prisma Segitiga =====\n");
	printf(" ==================================\n\n");
	printf(" == ABDUL WASI' AL-AFIF\n");
	printf(" == 20081010165\n\n");
	
	printf(" Object Count\t: %d \n", PrismaSegitiga::getCount());
	printf(" Object Counter\t: %d \n", PrismaSegitiga::counter);
	
	PrismaSegitiga volume1;
	printf(" Object Count\t: %d \n", PrismaSegitiga::getCount());
	PrismaSegitiga volume2(5, 7, 13);
	printf(" Object Counter\t: %d \n", PrismaSegitiga::counter);
	PrismaSegitiga volume3("Prisma Segitiga", 7, 9, 23);
	printf(" Object Count\t: %d \n", PrismaSegitiga::getCount());
	printf(" Object Counter\t: %d \n", PrismaSegitiga::counter);
	
	return 0;
}

