#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 229897871;
int var_1 = -410583341;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 3765051983U;
int var_12 = -424503575;
int zero = 0;
unsigned long long int var_18 = 1126902073656905044ULL;
unsigned int var_19 = 4045425766U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
