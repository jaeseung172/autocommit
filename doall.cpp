// Avoding Commit Type Madness
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("A-u-t-o C-o-m-m-i-t\n");
	system("git add .");
	system("git commit -m 'AFCM-MOM'"); 
	// Avoiding Fucking Commit Madness, MotherFucking Opensource Madness
	system("git push origin master");
	return 0;
}
