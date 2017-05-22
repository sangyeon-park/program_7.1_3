1 /***********************************  
2 **     볼링 점수 계산 프로그램       **  
3 **      작성자 : 상연박             ** 
4 **      작성일 : 2017년 5월 22일    **  
5 ***********************************/ 
6 
 
7 int main(void) 
8 { 
9     int grade[10]; 
10     int i, j, sum, tmp; 
11     float average; 
12     //성적입력 
13     for (i = 0; i < 10; i++) { 
14         printf("%d번째 성적을 입력하세요:", i); 
15         scanf("%d", &grade[i]); 
16     } 
17 
 
18     //평균계산 
19     for (i = sum = 0; i < 10; i++) 
20         sum+=grade[i]; 
21     average = sum / 10.0; 
22     printf("성적 평균: %f\n", average); 
23 
 
24         //선택정렬: 버블정렬 
25     for (i = 0; i < 9; i++) 
26         for(j = 9; j > i; j--) 
27             if (grade[j-1] > grade[j]){ 
28                 tmp = grade[j-1]; 
29                 grade[j-1] = grade[j]; 
30                 grade[j] = tmp; 
31             } 
32     //성적순으로 출력 
33     printf("성적순:"); 
34     for(i=0; i<10; i++) 
35         printf("%d", grade[i]); 
36     printf("\n"); 
37     return 0; 
38 } 
