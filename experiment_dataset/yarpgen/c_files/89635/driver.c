#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6594348234234229993ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 300772770U;
unsigned short var_3 = (unsigned short)39924;
unsigned long long int var_7 = 6101323331611785375ULL;
short var_9 = (short)14345;
_Bool var_10 = (_Bool)0;
int var_11 = 150139198;
int zero = 0;
long long int var_12 = 2529493187625855333LL;
int var_13 = -289965668;
int var_14 = 471577571;
void init() {
}

void checksum() {
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
