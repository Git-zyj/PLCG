#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 4940085616686757986LL;
unsigned int var_13 = 1992563138U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)14363;
long long int var_17 = 5706913929818535888LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
