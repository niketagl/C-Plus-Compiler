<<<<<<< HEAD
int fib(int n)
{
	if(n==0 || n==1)
		return 1;
	return fib(n-1) + fib(n-2);
=======
int fibbonacci(int n) {
   	if(n == 0){
   		return 0;
   	} else if(n == 1) {
   		return 1;
   	} else {
   		return (fibbonacci(n-1) + fibbonacci(n-2));
   	}
>>>>>>> 1f0aa5746291433b17284fbde42b4e3e6cc51c6d
}

int main() {
    int n = 5;
    int i;
	int a = fibbonacci(n);
}