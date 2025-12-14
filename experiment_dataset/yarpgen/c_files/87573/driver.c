#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)117;
unsigned long long int var_7 = 8246550384783964802ULL;
unsigned char var_13 = (unsigned char)214;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)176;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 53031808183085932ULL;
unsigned int var_20 = 1723371641U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
