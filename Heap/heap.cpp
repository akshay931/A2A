// Do code everyday and Achieve Your target
#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        size += 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleted()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
        }
        else
        {
            arr[1] = arr[size];
            size--;

            int i=1;
            while(i<size){
                int left=2*i;
                int right = 2*i+1;
                if(arr[left]>arr[i]){
                    swap(arr[left],arr[i]);
                    i=left;
                }
                
                else { 
                    swap(arr[right],arr[i]);
                    i=right;
                }
            }
        }
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(52);
    h.insert(58);
    h.insert(60);
    h.print();
}