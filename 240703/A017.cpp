// ���� ���� �ּҰ��� ã�� 
// ���ȣ  ~ 1000000

//(0 ~ 9), (6, 9) �ߺ����� 

//�ʿ��� ���� ��, ��ü �ߺ��� ������ �迭,

#include <iostream>
#define size 10 // (0  ~ 8����, 9�� 6�� �Բ� count)

using namespace std; 


int main()
{
    int *element = new int[size]; // element box 
    int number_set = 0; 
    int input = 0; 

// intialize 
for(int i =0; i < size; i++) element[i] = 0; 

// input 
cin >> input; 

//check used 
while(input > 0)
{
    int used_number = input % 10; 
    element[used_number] ++; 
    input /= 10; 
}

// �ߺ��Ǵ� �� ��� 
if(element[6] > 0 || element[9] > 0)
{
    int resize = 0;
    int sum = element[6] + element[9]; 
    resize = (sum /2) + (sum % 2); 

    element[6] = element[9] = resize; 
}

for(int i = 0; i < size; i++)
{
    if(number_set < element[i]) number_set = element[i]; 
}

printf("%d", number_set);

delete[] element; 
}