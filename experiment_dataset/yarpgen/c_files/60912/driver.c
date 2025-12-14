#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1400814370851152753ULL;
int var_3 = 876166752;
short var_6 = (short)12993;
_Bool var_7 = (_Bool)1;
long long int var_10 = 2309445085024780674LL;
int zero = 0;
unsigned long long int var_12 = 6907349171463832494ULL;
unsigned short var_13 = (unsigned short)3577;
unsigned long long int var_14 = 1304334308370482619ULL;
long long int var_15 = -584783534823481295LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
