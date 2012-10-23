#include <iostream>
#include <stdlib.h>
template <class T> void exch(T &, T &);
template <class T> void compexch(T &, T &, int &);
template <class T> void selection(T *, int, int, int &, int &);
template <class T> void insertion(T *, int, int, int &, int &);
template <class T> void bubble(T *, int, int, int &, int &);
template <class T> void marge(T *, int, int, int,int &,int &);
template <class T> void devide(T *, int, int,int &,int &);
using namespace std;
int main(int argc, char *argv[])
{
    int i, N = 1000;
    int lyg1, suk1, lyg2, suk2, lyg3, suk3, k;
    int *a = new int[N];
    int *b = new int[N];
    int *c = new int[N];


//----Darbai su selection
cout << "-----Su selection-----\n";
    //----Atsitiktinai sugeneruoja 1..1000
        for (i = 0; i < N; i++)
        a[i] = 1000*(1.0*rand()/RAND_MAX);
//----Sugeneruoja nuo 1 iki 1000
        for (i = 0; i < N; i++)
        b[i] = i;
//----Sugeneruoja nuo 1000 iki 1
        k =0;
        for (i = 999; i >-1 ;i--)
        {
            c[k]=i;
            k++;
        }
    lyg1=lyg2=lyg3=suk1=suk2=suk3=0;
    selection(a, 0, N-1, lyg1, suk1);
    selection(b, 0, N-1, lyg2, suk2);
    selection(c, 0, N-1, lyg3, suk3);
    cout << "random " << lyg1 << " " << suk1 << " suma =  " << lyg1+suk1 << endl;
    cout << "idealus " << lyg2 << " " << suk2 << " suma =    " << lyg2+suk2 << endl;
    cout << "blogas " << lyg3 << " " << suk3 << "  suma =  " << lyg3+suk3 << endl;

//----Darbai su insertion
cout << "-----Su insertion-----\n";
        //----Atsitiktinai sugeneruoja 1..1000
        for (i = 0; i < N; i++)
        a[i] = 1000*(1.0*rand()/RAND_MAX);
//----Sugeneruoja nuo 1 iki 1000
        for (i = 0; i < N; i++)
        b[i] = i;
//----Sugeneruoja nuo 1000 iki 1
        k =0;
        for (i = 999; i >-1 ;i--)
        {
            c[k]=i;
            k++;
        }
        lyg1=lyg2=lyg3=suk1=suk2=suk3=0;
    insertion(a, 0, N-1, lyg1, suk1);
    insertion(b, 0, N-1, lyg2, suk2);
    insertion(c, 0, N-1, lyg3, suk3);
    cout << "random " << lyg1 << " " << suk1 << " suma =   " << lyg1+suk1 << endl;
    cout << "idealus " << lyg2 << " " << suk2 << " suma =   " << lyg2+suk2 << endl;
    cout << "blogas " << lyg3 << " " << suk3 << " suma =   " << lyg3+suk3 << endl;

//----Darbai su bubble

   cout << "-----Su burbulu-----\n";
        //----Atsitiktinai sugeneruoja 1..1000
        for (i = 0; i < N; i++)
        a[i] = 1000*(1.0*rand()/RAND_MAX);
//----Sugeneruoja nuo 1 iki 1000
        for (i = 0; i < N; i++)
        b[i] = i;
//----Sugeneruoja nuo 1000 iki 1
        k =0;
        for (i = 999; i >-1 ;i--)
        {
            c[k]=i;
            k++;
        }
        lyg1=lyg2=lyg3=suk1=suk2=suk3=0;

    bubble(a, 0, N-1, lyg1, suk1);
    bubble(b, 0, N-1, lyg2, suk2);
    bubble(c, 0, N-1, lyg3, suk3);

    cout << "random " << lyg1 << " " << suk1 << " suma =    " << lyg1+suk1 << endl;
    cout << "idealus " << lyg2 << " " << suk2 << " suma =   " << lyg2+suk2 << endl;
    cout << "blogas " << lyg3 << " " << suk3 << " suma =   " << lyg3+suk3 << endl;

//----Darbai su merge

   cout << "-----Su suliejimo-----\n";
        //----Atsitiktinai sugeneruoja 1..1000
        for (i = 0; i < N; i++)
        a[i] = 1000*(1.0*rand()/RAND_MAX);
//----Sugeneruoja nuo 1 iki 1000
        for (i = 0; i < N; i++)
        b[i] = i;
//----Sugeneruoja nuo 1000 iki 1
        k =0;
        for (i = 999; i >-1 ;i--)
        {
            c[k]=i;
            k++;
        }
        lyg1=lyg2=lyg3=suk1=suk2=suk3=0;

    devide(a, 0, N-1, lyg1, suk1);
    devide(b, 0, N-1, lyg2, suk2);
    devide(c, 0, N-1, lyg3, suk3);

    cout << "random " << lyg1 << " " << suk1 << " suma =    " << lyg1+suk1 << endl;
    cout << "idealus " << lyg2 << " " << suk2 << " suma =   " << lyg2+suk2 << endl;
    cout << "blogas " << lyg3 << " " << suk3 << " suma =   " << lyg3+suk3 << endl;
}
// SukeiÄ?ia elementus vietomis
template <class T>
  void exch(T &A, T &B)
    { T t = A ; A = B; B = t; }
//-----------------veiksmai su pirmuoju masyvu
template <class T>

  void compexch(T &A, T &B, int &lyg)
    {  // pakeista
        if (B < A)
    {
        lyg++;
        exch(A, B);
    }
    }
template <class T>
int partition(T a[], int left, int right, int pivotIndex, int &suk, int &lyg)
{
    int pivot = a[pivotIndex];
    do
    {
        while (a[left] < pivot) left++;
        while (a[right] > pivot) right--;
        if (left < right && a[left] != a[right])
        {
            swap(a[left], a[right]); suk++;
        }
        else
        {
            return right;
        }
    }
    while (left < right);
    return right;
}

template <class T>
void selection(T a[], int l, int r, int &lyg, int &suk)
  {
                 for (int i = l; i < r; i++)
      { int min = i;
        for (int j = i+1; j <= r; j++)
            if (a[j] < a[min])
            {
                     min = j;
                     lyg++;
                     }
               exch(a[i], a[min]);
               suk++;
      }
  }
// Ä®terpimo algoritmo realizacija
template <class T>
void insertion(T a[], int l, int r, int &lyg, int &suk)
  {
      int i;
        for (i = r; i > l; i--)
        {
            suk++;
            compexch(a[i-1], a[i], suk);
        }
        for (i = l+2; i <= r; i++)
        { int j = i; T v = a[i];
            while (v < a[j-1])
            { a[j] = a[j-1]; j--;lyg++; }
            a[j] = v;

        }
  }
// Burbulo algoritmas
template <class T>
void bubble(T a[], int l, int r, int &lyg, int &suk)
  {
      for (int i = l; i < r; i++)
      for (int j = r; j > i; j--)
      {
        compexch(a[j-1], a[j], lyg);
        suk++;
      }
  }

// Iskaidymas
template <class T>
void marge(T a[],int lb,int r,int ub, int &lyg,int &suk)
{
   int i,j,k,b[1000];
   i=lb;
   j=r+1;
   k=lb;
   while(i<=r && j<=ub)
   {
	   if(a[i]<a[j])
	   {
		  b[k]=a[i];
		  i++;
	   }
	   else if(a[i]>a[j],lyg++)
	   {
		  b[k]=a[j];
		  j++;
	   }
	   else{
		  b[k++]=a[i];
		  b[k]=a[j];
		  i++;
		  j++;
	   }
	   k++;suk++;

   }
   while(i<=r)
   {
	   b[k]=a[i];
	   k++;
	   i++;
   }
   while(j<=ub)
   {
	   b[k]=a[j];
	   j++;
	   k++;

   }
   k=lb;
   while(k<=ub)
   {
	  a[k]=b[k];
	  k++;

   }
   return;
}
//Suliejimo algoritmas
template <class T>
void devide(T a[],int l,int u, int &lyg,int &suk)
{
   int m=(l+u)/2;
   if(l<u)
   {
	  devide(a,l,m,lyg,suk);
	  devide(a,m+1,u,lyg,suk);
   }
   marge(a,l,m,u,lyg,suk);

   return;
}
