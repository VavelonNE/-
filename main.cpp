#include <iostream>
#include <float.h>
 
using namespace std;
 
int main()
{
int N, x, y;
double sum, min, max; 
cout << "Введите размерность массива:" << endl;
cout << "N = ";
cin >> N; 
double *A = new double[N]; 
cout << "Введите элементы массива:" << endl;
for (int i = 0; i < N; i++)
{
cin >> A[i]; 
}
min = DBL_MAX;
max = DBL_MIN;
for (int i = 0; i < N; i++)
{
if (A[i] < min) 
{
min = A[i];
x = i;
}
if (A[i] > max) 
{
max = A[i];
y = i;
} 
sum += A[i] < 0;
}
cout << "Искомая сумма элементов: " << sum << endl;
delete [] A; 
system("pause");
return 0;
}