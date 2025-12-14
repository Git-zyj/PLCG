#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-119;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)201;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-5650;
int var_17 = -673191422;
int zero = 0;
signed char var_19 = (signed char)-83;
unsigned long long int var_20 = 13559929376771361085ULL;
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
