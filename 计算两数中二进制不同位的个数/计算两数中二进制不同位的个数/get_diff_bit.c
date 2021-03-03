#define _CRT_SECURE_NO_WARNINGS
//计算两数中二进制不同位的个数
# include<stdio.h>
int get_diff_bit(int m,int n){
	int tmp = m^n;
	int count = 0;
	while(tmp){
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main(){
	int m = 0;
	int n = 0;
	int count = 0;
	scanf("%d%d",&m,&n);
	count = get_diff_bit(m,n);
	printf("count = %d\n",count);
return 0;
}