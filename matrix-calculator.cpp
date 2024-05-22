#include<iostream>
#include<fstream>
using namespace std;

class AddTwoMatrix
{
    public:
    void addMatrix(int r, int c)
    {
        int a[r][c];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        int r2,c2;
        cout<<"Enter row2 : ";
        cin>>r2;
        cout<<"Enter col2 : ";
        cin>>c2;
        cout<<endl;
        int b[r2][c2];
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<"Enter value for "<<i+1<<","<<j+1<<" : ";
                cin>>b[i][j];
            }
        }
         for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                    cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<"Addition of following matrices are: "<<endl;
        if (r==r2 && c==c2)
        {
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    cout<<a[i][j]+b[i][j]<<" ";
                }
            cout<<endl;
            }
        }
        else
            cout<<"not possible";
    }
};

class SubtractTwoMatrix
{
    public:
    void subtractMatrix(int r, int c)
    {
        int a[r][c];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        int r2,c2;
        cout<<"Enter row2 : ";
        cin>>r2;
        cout<<"Enter col2 : ";
        cin>>c2;
        cout<<endl;
        int b[r2][c2];
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<"Enter value for "<<i+1<<","<<j+1<<" : ";
                cin>>b[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<"Subtraction of two matrices are: "<<endl;
        if (r==r2 && c==c2)
        {
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    cout<<a[i][j]-b[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
            cout<<"not possible";
    }
};

class MultiplyTwoMatrix
{
    public:
    void multiplyMatrix(int r,int c)
    {
        int a[r][c];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        int r2,c2;
        cout<<"Enter row2 : ";
        cin>>r2;
        cout<<"Enter col2 : ";
        cin>>c2;
        cout<<endl;
        int b[r2][c2];
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<"Enter value for "<<i+1<<","<<j+1<<" : ";
                cin>>b[i][j];
            }
        }
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl<<"Multiplication of following matrices are: "<<endl;

        int i,j,k,matrix[r][c];
        if(r==c2 && c==r2)
         {
             for(i = 0;i<r;i++)
             {
                for(j = 0;j<c;j++)
                {
                    matrix[i][j] = 0;
                    for(k = 0;k<c;k++)
                    {
                        matrix[i][j] += a[i][k]*b[k][j];

                    }
                }
            }

            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<matrix[i][j]<<" ";
                }

                cout<<endl;
            }
         }
         else
            cout<<"not possible";
    }

};

class inversematrix
{
public:
    void getData(int r,int c)
    {
        int a[r][c],x,i,j;
        for( i=0; i<r; i++)
        {
            for( j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for( i=0; i<r; i++)
        {
            for( j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        if (r==1 && c==1)
        {
            cout<<"Inverse of matrix : " <<endl;
            cout<<a[i][j];
        }
        if (r==2 && c==2)
        {
            cout<<"Inverse of matrix : " <<endl;
            cout<<"| "<<a[1][1]<<" "<<-(a[0][1])<<"|"<<endl;
            cout<<"| "<<-(a[1][0])<<" "<<(a[0][0])<<"|"<<endl;
            cout<<"\3";
        }
        if (r==3 && c==3)

        {
            x=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
            cout<< "Determinant:"<<x<<endl;


        /*cout<<"Adjoint of Matrix: "<<endl;
        cout<<"|"<<a[1][1]*a[2][2]-a[2][1]*a[1][2]<<" "<<-(a[0][1]*a[2][2]-a[2][1]*a[0][2])<<" "<<(a[0][1]*a[1][2]-a[1][1]*a[0][2])<<"|"<<endl;
        cout<<"|"<<-((a[1][0]*a[2][2]-a[2][0]*a[1][2]))<<" "<<(a[0][0]*a[2][2]-a[2][0]*a[0][2])<<" "<<-(a[0][0]*a[1][2]-a[1][0]*a[0][2])<<"|"<<endl;
        cout<<"|"<<(a[1][0]*a[2][1]-a[2][0]*a[1][1])<<" "<<-(a[1][0]*a[2][1]-a[2][0]*a[1][1])<<" "<<(a[0][0]*a[1][1]-a[1][0]*a[0][1])<<"|"<<endl;*/

        cout<<"Inverse of matrix : " <<endl;
        cout<<"1/"<<x<<"*";
        cout<<"|"<<a[1][1]*a[2][2]-a[2][1]*a[1][2]<<" "<<-(a[0][1]*a[2][2]-a[2][1]*a[0][2])<<" "<<(a[0][1]*a[1][2]-a[1][1]*a[0][2])<<"|"<<endl;
        cout<<"    |"<<-((a[1][0]*a[2][2]-a[2][0]*a[1][2]))<<" "<<(a[0][0]*a[2][2]-a[2][0]*a[0][2])<<" "<<-(a[0][0]*a[1][2]-a[1][0]*a[0][2])<<"|"<<endl;
        cout<<"    |"<<(a[1][0]*a[2][1]-a[2][0]*a[1][1])<<" "<<-(a[1][0]*a[2][1]-a[2][0]*a[1][1])<<" "<<(a[0][0]*a[1][1]-a[1][0]*a[0][1])<<"|"<<endl;


        }

    }


};

class TransposeMatrix
{
    public:
    void transposeMatrix(int r,int c)
    {
        int a[r][c];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<"Transpose of a matrix is: "<<endl;
        int i,j;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<a[j][i]<<" ";
            }
            cout<<endl;
        }

    }

};

class SymmetricMatrix:public TransposeMatrix
{
    public:
    void symmetricMatrix(int r,int c)
    {
        int a[r][c],i,j,flag=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //checking if the matrix is square
        if(r!=c)
            cout<<"\nNot a symmetric matrix";
        else
        {
            //checking for symmetry
            for(i=0 ; i<r ; i++)
            {
                for(j=0 ; j<c ; j++)
                {
                    if (a[i][j] != a[j][i])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            //displaying the result
            cout<<endl<<"Symmetric matrix of the following is:"<<endl;
            if(flag == 0)
            {
                for(i=0 ; i<r ; i++)
                {
                    for(j=0 ; j<c ; j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<"\nTherefore the following matrix is a symmetric matrix"<<endl;
            }
            else
                cout<<"\nNot a symmetric matrix"<<endl;
        }
    }
};

class SkewSymmetricMatrix:public TransposeMatrix
{
    public:
    void skewsymmetricMatrix(int r,int c)
    {
        int a[r][c],i,j,flag=0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //checking if the matrix is square
        if(r!=c)
            cout<<"\nNot a skew symmetric matrix";
        else
        {
            //checking for skew symmetry
            for(i=0 ; i<r ; i++)
            {
                for(j=0 ; j<c ; j++)
                {
                    if (a[i][j] != -a[j][i])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            //displaying the result
            cout<<endl<<"Skew symmetric matrix of the following is:"<<endl;
            if(flag == 0)
            {
                for(i=0 ; i<r ; i++)
                {
                    for(j=0 ; j<c ; j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<"\nTherefore the following matrix is a skew symmetric matrix"<<endl;
            }
            else
                cout<<"\nNot a skew symmetric matrix"<<endl;
        }
    }
};

class OrthogonalMatrix:public TransposeMatrix,public inversematrix
{
    public:
    void orthogonalMatrix(int r,int c)
    {
        int a[r][c],x,i,j;
        for( i=0; i<r; i++)
        {
            for( j=0; j<c; j++)
            {
                    cout<<"Enter "<<i+1<<"th and "<<j+1<<"th element : ";
                    cin>>a[i][j];
            }
        }
         for( i=0; i<r; i++)
         {
            for( j=0; j<c; j++)
            {
                    cout<<a[i][j]<<" ";
            }
            cout<<endl;
         }
         cout<<endl<<"Orthogonal matrix of the following is: "<<endl;

    }
};

int main()
 {
    int ch;
    cout<<"What do you want to perform in matrix calculator ? : \n 1. Addition \n 2. Subtraction \n 3. Multiplication\n 4. Inverse of matrix\n 5. Transpose of matrix\n 6. Symmetric matrix\n 7. Skew Symmetric matrix\n 8. Orthogonal matrix\n"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    cout<<endl;
    int r,c;
    cout<<"Enter row : ";
    cin>>r;
    cout<<"Enter col : ";
    cin>>c;
    cout<<endl;
    if(ch == 1)
    {
        AddTwoMatrix addTwoMatrix;
        addTwoMatrix.addMatrix(r,c);
    }
    if(ch == 2)
    {
        SubtractTwoMatrix subtractTwoMatrix;
        subtractTwoMatrix.subtractMatrix(r,c);
    }
    if(ch==3)
    {
        MultiplyTwoMatrix multiplyTwoMatrix;
        multiplyTwoMatrix.multiplyMatrix(r,c);
    }
    if(ch==4)
    {
        inversematrix y;
        y.getData(r,c);
    }
    if(ch==5)
    {
        TransposeMatrix x;
        x.transposeMatrix(r,c);
    }
    if(ch==6)
    {
        SymmetricMatrix z;
        z.symmetricMatrix(r,c);
    }
    if(ch==7)
    {
        SkewSymmetricMatrix a;
        a.skewsymmetricMatrix(r,c);
    }
    if(ch==8)
    {
        OrthogonalMatrix b;
        b.orthogonalMatrix(r,c);
    }

    return 0;
}

