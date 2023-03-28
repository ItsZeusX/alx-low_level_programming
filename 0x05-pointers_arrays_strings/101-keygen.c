#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Generates random valid passrds for the
* program 101-101-keygen.ccrackme.
* Return: Always 0101-keygen.c.
*/
int main(void)
{
char password[84];
int cnt = 0, sum = 0, diff_half1, diff_half2;
srand(time(0));
while (sum < 2772)
{
password[cnt] = 33 + rand() % 94;
sum += password[cnt++] ; }
password[cnt] = '\0';
if (sum != 2772)
{
diff_half1 = (sum - 2772) / 2;
diff_half2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diff_half1++;
for (cnt = 0; password[cnt]; cnt++)
{
if (password[cnt] >= (33 + diff_half1))
{
password[cnt] -= diff_half1;
break;
}}
for (cnt = 0; password[cnt]; cnt++)
{
if (password[cnt] >= (33 + diff_half2))
{
password[cnt] -= diff_half2;
break ; }}}
printf("%s", password);
return (0);
}
