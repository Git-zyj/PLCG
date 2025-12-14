#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3586664971367752177ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 2638432236U;
unsigned long long int var_9 = 8020446642188704895ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)3643;
int zero = 0;
unsigned short var_16 = (unsigned short)46264;
unsigned short var_17 = (unsigned short)48858;
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
