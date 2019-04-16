double func(double x) 
{ 
    return x*x*x - x*x + 2.0; 
} 

double derivFunc(double x) 
{ 
    return 3.0*x*x - 2.0*x; 
} 

void newtonRaphson(double x) 
{ 
    double h = func(x) / derivFunc(x); 
    double abslt = h;
    if(h < 0.0) abslt = -1.0 * h;
    double n = x;
    while (abslt >= 0.001) 
    { 
        h = func(n)/derivFunc(n);    
        n = n - h; 
    }
    //print(n);
}

double main() 
{ 
    double x0 = -20.0;
    newtonRaphson(x0);

} 