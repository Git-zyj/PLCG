#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -748079445;
unsigned long long int var_4 = 10163990740044724956ULL;
unsigned short var_7 = (unsigned short)63632;
unsigned int var_8 = 1129179458U;
unsigned long long int var_9 = 285346500980563691ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 1088283667357337711ULL;
short var_15 = (short)4960;
int var_16 = 2015413625;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
