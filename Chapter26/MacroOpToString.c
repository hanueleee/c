#include <Stdio.h>
#define	STRING_JOB(A, B)	#A "�� ������ " #B "�Դϴ�."

int main(void)
{
	printf("%s \n", STRING_JOB(�̵���, ������));
	printf("%s \n", STRING_JOB(�ѻ��, ������));
	return 0;
}
