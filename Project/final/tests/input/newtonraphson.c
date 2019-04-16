double func(double x) 
{ 
    return x*x*x - x*x + 2; 
} 

double derivFunc(double x) 
{ 
    return 3*x*x - 2*x; 
} 

double newtonRaphson(double x) 
{ 
    double h = func(x) / derivFunc(x); 
    double abslt = h;
    if(h < 0) abslt = -1.0 * h;
    while (abslt >= 0.001) 
    { 
        h = func(x)/derivFunc(x);    
        x = x - h; 
    }
    return x;
} 

int main() 
{ 
    double x0 = -20;
    double ans;
    ans = newtonRaphson(x0);

} 