#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main (int argc, char *argv[]) {
int i, n;
char str[40];
n = atoi (argv[1]);
for (i=1; i<=n; i++) {
if ( fork() == 0) {
sprintf (str, "%d", n-1);
execlp (argv[0], argv[0], str, NULL);
}
}
printf ("%d", n);
fflush (stdout);
exit (0);
}