class Fraccion{
    private:
        int num,den;
    
    public:
        Fraccion(){
            this->setNumerator(0);
            this->setDenominator(1);    
        }
        Fraccion(int a,int b){
            this->setFraccion(a,b);
        }
        Fraccion(double n){
            this->setDecimal(n);
        }

        int getNumerator();
        int getDenominator();
        double getDecimal();

        void setNumerator(int a);
        void setDenominator(int b);
        void setFraccion(int a,int b);
        void setDecimal(double dec);

        int mcd(int a, int b);
        int mcm(int a, int b);
        void decToFrac();

        Fraccion operator +(Fraccion &a);
        Fraccion operator +(int a);
        Fraccion operator +(double a);
        Fraccion operator -(Fraccion &a);
        Fraccion operator -(int a);
        Fraccion operator -(double a);
        Fraccion operator *(Fraccion &a);
        Fraccion operator *(int a);
        Fraccion operator *(double a);
        Fraccion operator /(Fraccion &a);
        Fraccion operator /(int a);
        Fraccion operator /(double a);

        friend ostream& operator <<(ostream &o,Fraccion p){
            if(p.getDenominator()==1){
                o<<p.getNumerator();
            }else{
                o<<p.getNumerator()<<"/"<<p.getDenominator();
            }
            return o;
        }

};

#include "FraccionImplement.cpp"