/* computação 1 - Teste 1.3 - 2017.1*/
#include <stdio.h>
#include <string.h>

int main(void){
	void exe1(void);
	void exe2(void);
	int func1(int a, int b);
	//exe1();
	exe2();


	return 0;

}

void exe1(void){
	int n, i, j, k = 0;
	char s1[512], s2[512], r[512][512];
	scanf("%d", &n);
	while (n > 0){
		scanf("%s %s", s1, s2);
		if( strlen(s1) > strlen(s2) ){
			j = 0;
			for(i = 0; i < strlen(s2); i++){
				r[k][j++] = s1[i];
				r[k][j++] = s2[i];
			}
			for(i-=1; i< strlen(s1); i++){
				r[k][j++] = s1[i];
			}
		}
		else if( strlen(s2) > strlen(s1) ){
			j = 0;
			for(i = 0; i < strlen(s1); i++){
				r[k][j++] = s1[i];
				r[k][j++] = s2[i];
			}
			for(i = i; i< strlen(s2); i++){
				r[k][j++] = s2[i];
			}
		}
		else{
			j = 0;
			for(i = 0; i < strlen(s2); i++){
				r[k][j++] = s1[i];
				r[k][j++] = s2[i];
			}

		}
		printf("%s\n", r[k]);
		k++;
		n--;
	}
}

void exe2(void){
	int func1(int a, int b);
	int a, b, sum;
	while(1){
		scanf("%d %d",&a, &b);
		if (a <= 0 || b <= 0){
			break;
		} else{
			if(a >= b){
				sum = func1(a, b);
				printf("Sum=%d\n", sum);
			}
			else if( b > a){
				sum = func1(b, a);
				printf("Sum=%d\n", sum);
			}
		}
}
}

int func1(int a, int b){
	int sum = 0;
	while(b <= a){
		printf("%d ", b);
		sum+=b;
		b++;
	}
	return sum;
}
