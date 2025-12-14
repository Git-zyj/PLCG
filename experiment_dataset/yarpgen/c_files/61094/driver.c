#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)21607;
_Bool var_11 = (_Bool)1;
long long int var_13 = 7697002560488328212LL;
unsigned int var_17 = 3740873206U;
int zero = 0;
int var_18 = 842157644;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4023155049U;
unsigned char var_21 = (unsigned char)3;
unsigned int var_22 = 3964790029U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
