#include <stdio.h>
extern void share_foo(char*);

int main()
{
    FILE *fp = fopen("/etc/foo.conf", "r");

    if (NULL == fp) {
        printf("No config file");
        return -1;
    }

    fclose(fp);

    share_foo("SS6-EX");
    return 0;
}
