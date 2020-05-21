#include<stdio.h>
int main(int argc,char *argv[],char *envp[]) {
	int nch=0,nword=0,word=0;
	FILE * pf = fopen(argv[2], "r" );
	char ch;
	switch (*(argv[1] + 1)) {
		case 'c':
			while((ch=fgetc(pf))!=EOF) {
				putchar(ch);
				nch++;
			}
			printf("\n");
			printf("字符数：%d",nch) ;
			break;
		case 'w':
			while((ch=fgetc(pf))!=EOF) {
				putchar(ch);

				if(ch==' '||ch==',')
					word=0;
				else if(word==0) {
					word=1;
					nword++;
				}
			}
			printf("\n");
			printf("字母数：%d",nword) ;
			break;
		default:
			printf("参数有误\n");
			break;
	}
	return 0;
}
