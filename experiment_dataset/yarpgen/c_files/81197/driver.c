#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2445;
unsigned short var_5 = (unsigned short)63393;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 1112009256;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3312540428267565088LL;
unsigned long long int var_14 = 4947766033808045120ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
