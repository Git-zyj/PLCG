#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3519334664694423699LL;
short var_2 = (short)-13108;
unsigned short var_4 = (unsigned short)51284;
unsigned long long int var_5 = 2773131907533975112ULL;
int zero = 0;
unsigned int var_15 = 3742616168U;
_Bool var_16 = (_Bool)0;
long long int var_17 = 4449223286078078420LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
