#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11305497422817811647ULL;
unsigned long long int var_5 = 5684760656341825887ULL;
unsigned long long int var_7 = 13029938481944243152ULL;
unsigned short var_8 = (unsigned short)18543;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -7396083996955116393LL;
long long int var_12 = 2045597840492240417LL;
long long int var_13 = -7951663719503018176LL;
long long int var_14 = 1715012312834609404LL;
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
