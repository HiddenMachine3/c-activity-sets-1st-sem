#include <stdio.h>
#include <math.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main(){

    int n = input_size();
    int arr[n];
    input_array(n,arr);
    output(find_largest_index(n,arr));
    return 0;
}

int input_size(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n]){
    printf("Enter %d integers : \n",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]){
    int largest = 0;
     for (int i = 0; i < n; i++){
        if(a[i]>a[largest]){
            largest = i;
        }
    }

    return largest;
}

void output(int index)
{
    printf("Largest number in the array is at index %d", index);
}