int Fraccion::getNumerator(){
    return this->num;
}

int Fraccion::getDenominator(){
    return this->den;
}

double Fraccion::getDecimal(){
    return this->getNumerator()/this->getDenominator();
}

void Fraccion::setNumerator(int a){
    this->num = a;
}

void Fraccion::setDenominator(int b){
    this->den = b;
}

void Fraccion::setFraccion(int a,int b){
    int n,d,m;
    m=this->mcd(a,b);
    n=a/m;
    d=b/m;
    this->setNumerator(n);
    this->setDenominator(d);
}

void Fraccion::setDecimal(double dec){
    double n=1,d=1,aux=1;
    while(aux!=dec){
        aux=n/d;
        if(aux<dec){
            n=n+1;
        }else if(aux>dec){
            n=n-1;
            d=d+1;
        }
    }
    this->setNumerator((int)n);
    this->setDenominator((int)d);
}

int Fraccion::mcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return mcd(b,a%b);
    }
}

int Fraccion::mcm(int a, int b){
    return (a*b)/this->mcd(a,b);
}



Fraccion Fraccion::operator +(Fraccion &a){
    Fraccion resp;
    int n,d;
    d = this->mcm(this->getDenominator(),a.getDenominator());
    n = (d/this->getDenominator()*this->getNumerator()) + (d/a.getDenominator()*a.getNumerator());
    resp.setNumerator(n);
    resp.setDenominator(d);
    return resp;
}

Fraccion Fraccion::operator +(int a){
    Fraccion f(a,1);
    return (*this + f);
}

Fraccion Fraccion::operator +(double a){
    Fraccion f(a);
    return (*this + f);
}

Fraccion Fraccion::operator -(Fraccion &a){
    Fraccion resp;
    int n,d;
    d = this->mcm(this->getDenominator(),a.getDenominator());
    n = (d/this->getDenominator()*this->getNumerator()) - (d/a.getDenominator()*a.getNumerator());
    resp.setNumerator(n);
    resp.setDenominator(d);
    return resp;
}

Fraccion Fraccion::operator -(int a){
    Fraccion f(a,1);
    return (*this - f);
}

Fraccion Fraccion::operator -(double a){
    Fraccion f(a);
    return (*this - f);
}

Fraccion Fraccion::operator *(Fraccion &a){
    Fraccion resp;
    int n,d,m;
    n = this->getNumerator() * a.getNumerator();
    d = this->getDenominator() * a.getDenominator();
    m = this->mcd(n,d);
    n=n/m;
    d=d/m;
    resp.setNumerator(n);
    resp.setDenominator(d);
    return resp;
}

Fraccion Fraccion::operator *(int a){
    Fraccion f(a,1);
    return (*this * f);
}

Fraccion Fraccion::operator *(double a){
    Fraccion f(a);
    return (*this * f);
}

Fraccion Fraccion::operator /(Fraccion &a){
    Fraccion resp;
    int n,d,m;
    n = this->getNumerator() * a.getDenominator();
    d = this->getDenominator() * a.getNumerator();
    m = this->mcd(n,d);
    n=n/m;
    d=d/m;
    resp.setNumerator(n);
    resp.setDenominator(d);
    return resp;
}

Fraccion Fraccion::operator /(int a){
    Fraccion f(a,1);
    return (*this / f);
}

Fraccion Fraccion::operator /(double a){
    Fraccion f(a);
    return (*this / f);
}