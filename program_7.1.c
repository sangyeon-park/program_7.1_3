1 /***********************************  
2 **     ���� ���� ��� ���α׷�       **  
3 **      �ۼ��� : �󿬹�             ** 
4 **      �ۼ��� : 2017�� 5�� 22��    **  
5 ***********************************/ 
6 
 
7 int main(void) 
8 { 
9     int grade[10]; 
10     int i, j, sum, tmp; 
11     float average; 
12     //�����Է� 
13     for (i = 0; i < 10; i++) { 
14         printf("%d��° ������ �Է��ϼ���:", i); 
15         scanf("%d", &grade[i]); 
16     } 
17 
 
18     //��հ�� 
19     for (i = sum = 0; i < 10; i++) 
20         sum+=grade[i]; 
21     average = sum / 10.0; 
22     printf("���� ���: %f\n", average); 
23 
 
24         //��������: �������� 
25     for (i = 0; i < 9; i++) 
26         for(j = 9; j > i; j--) 
27             if (grade[j-1] > grade[j]){ 
28                 tmp = grade[j-1]; 
29                 grade[j-1] = grade[j]; 
30                 grade[j] = tmp; 
31             } 
32     //���������� ��� 
33     printf("������:"); 
34     for(i=0; i<10; i++) 
35         printf("%d", grade[i]); 
36     printf("\n"); 
37     return 0; 
38 } 
