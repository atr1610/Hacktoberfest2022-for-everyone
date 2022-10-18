#include<iostream>
#include<iomanip>
using namespace std;
int ascen(int a[], int n) /* function to sort an aay with insertion sort */  
{  
    int i, j, temp,cnt=0;  
    for (i = 1; i < n; i++) 
    {  
        temp = a[i];  
        j = i - 1;  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;  
            cnt++;  
        }    
        a[j+1] = temp;    
        cnt++;
    }
    return cnt;  
} 
void crarr(int arr[],int n)
{
    for(int i = 0; i < n; i++)
        arr[i] = rand()%100; 
}
void disp(int arr[],int n)
{
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int descen(int arr[],int n)
{
    int i, j, temp,cnt=0;  
    for (int i = 0; i < n; i++) 
    {     
        for (int j = i+1; j < n; j++) 
        {     
           if(arr[i] < arr[j]) 
           {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;  
           }
           cnt++;     
        }
        cnt++;     
    } 
    return cnt; 
}
void displayTable()
{
    int sizes[10] = {5000, 10000, 15000, 20000, 25000, 30000, 35000, 40000, 45000, 50000},temp;

    cout << "Input\t\t"
         << "Algo 1\t\t\t"
         << "Algo 2\t\t\t"
         << "Algo 3" << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        int Arr[sizes[i]];
        crarr(Arr, sizes[i]);
        temp=ascen(Arr,sizes[i]);
        cout << sizes[i] << "\t\t" << fixed << ascen(Arr, sizes[i]) << setprecision(6);
        crarr(Arr, sizes[i]);
        temp = descen(Arr, sizes[i]);
        cout << "\t\t" << fixed << ascen(Arr, sizes[i]) << setprecision(6);
        crarr(Arr, sizes[i]);
        cout << "\t\t" << fixed << ascen(Arr, sizes[i]) << setprecision(6) << endl;
    }
}
int main()
{
    int ch,n,temp,rand,asc,desc;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];            
    cout<<"Enter your choice from menu :";
    cout<<"\n0. To exit";
    cout<<"\n1. Create an array of n random elements";
    cout<<"\n2. Display the array";
    cout<<"\n3. Sort the array in ascending order using insertion sort.";
    cout<<"\n4. Sort the array in descending order";
    cout<<"\n5. Find time complexity for sorting a random array";
    cout<<"\n6. Find time complexity for sorting an already sorted array";
    cout<<"\n7. Find time complexity for sorting an array sorted in descending order";
    cout<<"\n8. Time complexity for sorting array of random form,ascending order,descending order from n = 5000 to 50000:\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0 : 
                cout<<"Exiting..\n";
                break;
            case 1 : 
                crarr(arr,n);    
                cout<<"\nArray created.\n";
                break;
            case 2 : 
                cout<<"The array : \n";
                disp(arr,n);
                break;
            case 3 : 
                temp = ascen(arr,n);
                cout<<"Array after sorting : \n";
                disp(arr,n);
                break;
            case 4 :   
                temp = descen(arr,n);
                cout<<"Array after sorting : \n";
                disp(arr,n);
                break;
            case 5 :
                crarr(arr,n);
                rand = ascen(arr,n);
                cout<<"Array after sorting : \n";
                disp(arr,n);
                cout<<"Complexity : "<<rand<<endl;
                break;
            case 6 :
                crarr(arr,n);
                temp = ascen(arr,n);
                asc = ascen(arr,n);
                cout<<"Array after sorting : \n";
                disp(arr,n);
                cout<<"Complexity : "<<asc<<endl;
                break;
            case 7 :
                crarr(arr,n);
                temp = descen(arr,n);
                desc = ascen(arr,n);
                cout<<"Array after sorting : \n";
                disp(arr,n);
                cout<<"Complexity : "<<desc<<endl;
                break;
            case 8 :
                displayTable();
                break;
            default :
                cout<<"Wrong choice!!";
                break;
        }
        cout<<"Choice : ";
        cin>>ch;
    }
}