
#include <iostream>
using namespace std;

//C code for Diagonal Matrix ***************

/*
struct Matrix
{
    int A[10];
    int n;
};

void Set(struct Matrix *m, int i, int j ,int x)
{
    if(i==j)
    {
        m->A[i-1]=x;
    }
}

int Get(struct Matrix m, int i, int j)
{
  if(i==j)
  {
      return m.A[i-1];
  }
  return 0;
}
void Display (struct Matrix m)
{
    for(int i=1; i<m.n+1; i++)
    {
        for(int j=1; j<m.n+1; j++)
        {
            if(i==j)
            {
                printf("%d ",m.A[i-1]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
*/





//C++ Code for Diagonal Matrix******


/*
class Diagonal
{
    private:
    int n;  //Diamention
    int *A;
    
    public:
    
    Diagonal(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void Diagonal :: Set(int i, int j, int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
    
}

int Diagonal :: Get(int i, int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    
        return 0;
    
}

void Diagonal :: Display()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                cout<<A[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
            
        }
        cout<<endl;
    }
}
*/



//Lower Triangular Matrix******
//C code ****
/*
struct Matrix
{
  int *A;
  int n;
};

void
Set (struct Matrix *m, int i, int j, int x)
{
  if (i >= j)
    {
      m->A[i * (i - 1) / 2 + j - 1] = x;
    }
}

int
Get (struct Matrix m, int i, int j)
{
  if (i >= j)
    {
      return m.A[i * (i - 1) / 2 + j - 1];
    }
  else
    return 0;
}

void
Display (struct Matrix m)
{
  for (int i = 1; i <= m.n; i++)
    {
      for (int j = 1; j <=m.n; j++)
	{
	  if (i >= j)
	    {
	      cout << m.A[i * (i - 1) / 2 + j - 1] << " ";
	    }
	  else
	    {
	      cout << "0 ";
	    }
	}
      cout << endl;
    }
}
*/



//Lower Triangular Matrix******
//C++ code ****


/*
class LowerTri
{
    private:
    int *A; 
    int n;
    public:
    LowerTri()
    {
        n=2;
        A=new int[2*(2+1)/2];
    }
    LowerTri(int n)
    
    {
        this->n=n;
        A=new int[n*(n+1)/2];
        
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void LowerTri::Set(int i, int j, int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1]=x;
    }
}

int LowerTri::Get(int i, int j)
{
    if(i>=j)
    {
       return A[i*(i-1)/2+j-1];
    }
    return 0;
}
  
  
void LowerTri::Display()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i>=j)
            {
            cout<<A[i*(i-1)/2+j-1]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
*/

int
main ()
{
  //C code ****
  /*
     struct Matrix m;
     m.n=4;
     Set(&m,1,1,5); Set(&m,2,2,6);  Set(&m,3,3,7); Set(&m,4,4,8);
     Display(m);
   */

  //C++ code*****


  /*
     Diagonal d(4);
     d.Set(1,1,5);
     d.Set(2,2,6);
     d.Set(3,3,7);
     d.Set(4,4,5);
     d.Display();
   */






  //Lower Triangular Matrix*********
//C code*****
  /*
     struct Matrix m;
     cout << "Enter Diamention" << endl;
     cin >> m.n;
     m.A = new int[m.n * (m.n + 1) / 2 * sizeof (int)];
     cout << "Enter The Elements" << endl;
     int i, j, x;
     for (i = 1; i <= m.n; i++)
     {
     for (j = 1; j <= m.n; j++)
     {
     scanf("%d",&x);
     Set (&m, i, j, x);
     }
     }
     printf ("\n\n");
     Display (m);
   */
   
   /*
   cout<<"Enter Diamention"<<endl;
   int d;
   cin>>d;
   
   LowerTri lr(d);
   cout<<"Enter Elements"<<endl;
   int x;
   for(int i=1; i<=d; i++)
   {
       for(int j=1; j<=d; j++)
       {
           cin>>x;
           lr.Set(i,j,x);
       }
   }
   lr.Display();
   */






  return 0;
}

