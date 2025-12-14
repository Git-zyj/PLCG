#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1612116689;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-2205;
int var_5 = -225723379;
unsigned long long int var_6 = 14138290492542555445ULL;
unsigned int var_7 = 1782350313U;
unsigned short var_10 = (unsigned short)26053;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)107;
int zero = 0;
unsigned long long int var_13 = 2826941895760900103ULL;
long long int var_14 = 2201971457258222752LL;
unsigned int var_15 = 2476993627U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
