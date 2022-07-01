#include <iostream>
#include <math.h>
 
using namespace std;

class Segitiga{
	public:
		float l, ts;
		Segitiga();
		Segitiga(float l, float ts);
		
		float getLebar(){
			return l;
		}
		float getTinggi(){
			return ts;
		}
		float getSegitiga(){
			return 1 / 2 * l * ts;
		}
	
};

//float Segitiga::getTinggi(){
//	return ts;
//}
//
//float Segitiga::getSegitiga(){
//	return 1 / 2 * l * ts;
//}
//};

Segitiga::Segitiga(){
	l = 10;
	t_s = 3;
}

Segitiga::Segitiga(float a, float ts){
	l = l_;
	ts = ts_;
}

//float Segitiga::getLebar(){
//	return l;
//}
//
//float Segitiga::getTinggi(){
//	return ts;
//}
//
//float Segitiga::getSegitiga(){
//	return 1 / 2 * l * ts;
//}

class Prisma : public Segitiga {
	public:
		float tp;
		Prisma();
		Prisma(float tp, float l, float ts);
		
		float getTinggiPrisma();
		float getVolume();
		
};

Prisma::Prisma(float tp, float l, float ts){
	tp = tp_;
	l = l_;
	ts = ts_;
}

float Prisma::getTinggiPrisma(){
	return tp;
}

float Prisma::getVolume(){
	return Prisma.getSegitiga() * tp; 
}



int main(){
	system("cls");
	printf(" ==================================\n");
	printf(" ===== Volume Prisma Segitiga =====\n");
	printf(" ==================================\n\n");
	printf(" == ABDUL WASI' AL-AFIF\n");
	printf(" == 20081010165\n\n");
	
	printf(Prisma.getSegitiga());
//	
//	printf(" Object Count\t: %d \n", PrismaSegitiga::getCount());
//	printf(" Object Counter\t: %d \n", PrismaSegitiga::counter);
	
	return 0;
}

