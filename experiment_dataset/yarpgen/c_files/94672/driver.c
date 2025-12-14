#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
short var_1 = (short)10216;
unsigned short var_4 = (unsigned short)57159;
long long int var_6 = -6587490414319416769LL;
short var_7 = (short)17789;
unsigned int var_8 = 1369932161U;
int var_9 = 1165711154;
long long int var_13 = -3115937438860929216LL;
int zero = 0;
short var_14 = (short)19919;
unsigned char var_15 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
