#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7277;
unsigned short var_1 = (unsigned short)8789;
short var_2 = (short)4004;
long long int var_4 = -1794196269834730457LL;
unsigned int var_5 = 963178260U;
int var_10 = -1610602967;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)8271;
unsigned short var_13 = (unsigned short)43359;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
