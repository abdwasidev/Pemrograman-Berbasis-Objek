#include <iostream>
 
using namespace std;

class Segitiga { 
   	protected:
      	float l, ts, ls;
   	public:
	      Segitiga();
		  Segitiga(float l_, float ts_);
	      float Lebar();
	      float TinggiSegitiga();
};

Segitiga::Segitiga(){
	l = 4;
    ts = 3;
}

Segitiga::Segitiga(float l_, float ts_){
	l = l_;
	ts = ts_;
}

float Segitiga::Lebar(){
	return l;
}
float Segitiga::TinggiSegitiga(){
	return ts;
}

class Prisma : public Segitiga{
	private:
		float tp, v;
	public:
		Prisma();
		Prisma(float tp_, float ts_, float l_);
		float TinggiPrisma();
		float VolumePrisma();
		float GetVolume();
};


Prisma::Prisma(){
	tp = 7;
}

Prisma::Prisma(float tp_, float ts_, float l_){
	tp = tp_;
	ts = ts_;
	l = l_;
}

float Prisma::TinggiPrisma(){
	return tp;
}

float Prisma::VolumePrisma(){
	v = ((l * ts * .5) * tp);
	return v;
}

int main(){
	system("cls");
	printf(" ===================================\n");
	printf(" === Inheritance Prisma Segitiga ===\n");
	printf(" ===================================\n\n");
	printf(" == ABDUL WASI' AL-AFIF\n");
	printf(" == 20081010165\n\n");
	
	Prisma segitiga;
	
	printf(" Lebar\t\t: %0.2f \n", segitiga.Lebar());
	printf(" Tinggi Segitiga: %0.2f \n", segitiga.TinggiSegitiga());
	printf(" Tinggi Prisma\t: %0.2f \n", segitiga.TinggiPrisma());
	printf(" Volume Prisma\t: %0.2f \n", segitiga.VolumePrisma());
	
	return 0;
}

