#include<stdio.h>
#include<string.h>


//��һ�� �����λ���ĳ˻�  234   2*3*4
 /*int main() {
   	
     int n;
    
     int  sum = 1;
     scanf_s("%d", &n);
     
     
    // n%10  1
    // (n/10)%10  2
     //(n/100)%10  3
   //  ......
     //(n/10000....)%10   
     
     


     for (int i = 1; ; i *= 10)
     {
         
         if (n / i == 0)
             break;
         else
             sum *= (n / i) % 10;

     }
     
     printf("%d", sum);
     
     return 0;
  
}*/

//�ڶ��� ��쳲���������ǰ20���
/*
int fun(int n);

int main(void)
{
    int n = 20,sum = 0;
    

    for(int i=1;i<=n;i++)
    sum += fun(i);


    printf("%d",sum);
    return 0;
}

int fun(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fun(n - 1) + fun(n - 2);


}*/
/*
//��1��100Ԫ������Ҷһ���10Ԫ��5Ԫ��1Ԫ��ֽ�ң�ÿ�ֶ�Ҫ�У���50�ţ�������Щ�һ�������
int main(void)
{
    int i, j, k;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    int money = 100;

    for (i = 1; i <= 10; i++)
    {
        sum1 = money - 10 * i;
        for (j = 1; j <= 20; j++)
        {
             sum2 = sum1 - 5 * j;
             for (k = 1; k < 100; k++)
             {
                 sum3 = sum2 - k;
                 if (sum3 == 0&&(i+j+k)==50)
                     printf("%d %d %d\n",i,j,k);

             }
        }

    }



    return 0;
}*/

/*
//���� ��getchar��������һ���ַ����жϸ��ַ��Ƿ��������ַ�������������ַ�������������ַ���ASCII��ֵ�������������ַ���
int main(void)
{

    char ch;

    ch = getchar();
    if (ch <= '9' && ch >= '0')
        printf("%d", ch);
    else
        printf("%c", ch);



    return 0;
}
*/
/*
//��������1!+2!+3!+...+n!�ĺͣ�nֵ���û����롣
int main(void)
{

    long sum = 0;
    long num = 1;

    int n, i;
    
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        num *= i;
        sum += num;
       
    }

    printf("%lf",(double)sum);

    return 0;
}*/
/*
//ð�ݷ�
int main()
{
    int a[8];
    int temp = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf_s("%d", &a[i]);
    }

    for(int i = 0;i<8-1; i++) 
        for(int j =0; j<8-1-i ; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

            }
    for (int i = 0; i < 8; i++)
    {
        printf("%4d", a[i]);
    }



    return 0;
}*/
/*
int main(void)
{
    long sum = 0;
  
    int i;

   

    for (int j = 0; j <= 6000; j++)
    {
        sum =  j*j ;

        for (i = 1;; i *= 10)
            if (j / i == 0)
                break;

        if (sum % i == j)
            printf("%5ld",j);

    }

    return 0;
}*/
/*
#include<stdio.h>
#define N   1000

int main()
{
    char a[N];
    int num[26];
    int max = 0;

    for (int i = 0; i < 26; i++)
        num[i] = 0;

    scanf_s("%s", a,N);


    for (int j = 0; j < 26; j++)
        for (int k = 0; k < N; k++)
            if (a[k] == 'a' + j)
                num[j]++;

    for (int m = 0; m < 26; m++)
        if (num[m] > num[max])
            max = m;

    printf("%c\n", 'a' + max);
    printf("%d", num[max]);

    return 0;
}*/

#include<stdio.h>

int main()
{
    int n;
    int num1 = 0, num2 = 0;
    int score[100] = { 0 };

    scanf_s("%d\n", &n);

    for (int i = 0; i < n; i++)
        scanf_s("%d\n", &score[i]);

    for (int j = 0; j < n; j++)
    {
        if (score[j] >= 85)
            num1++;
        else if (score[j] >= 60)
            num2++;
    }

    printf("%d", 100 * num2 / n);
    printf("//%");
    printf("%d",100*num1/n);

    return 0;
}
