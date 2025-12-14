#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9023518521808141501ULL;
short var_2 = (short)11442;
signed char var_5 = (signed char)80;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)251;
unsigned long long int var_14 = 16351530166841674255ULL;
int zero = 0;
short var_16 = (short)-10429;
unsigned short var_17 = (unsigned short)60857;
long long int var_18 = -4759264059991368403LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
