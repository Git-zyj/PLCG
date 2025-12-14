#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2238503831U;
unsigned long long int var_1 = 11734143754634622935ULL;
long long int var_2 = 5655291729733796553LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)24941;
long long int var_5 = -3603752331402500473LL;
unsigned char var_6 = (unsigned char)126;
unsigned long long int var_8 = 3717593354035623275ULL;
unsigned char var_9 = (unsigned char)108;
unsigned int var_10 = 2923886540U;
unsigned char var_12 = (unsigned char)120;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3739968813U;
unsigned int var_15 = 3863127344U;
unsigned char var_16 = (unsigned char)229;
unsigned long long int var_17 = 12860008996565220041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
