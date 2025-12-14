#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21723;
unsigned int var_1 = 1947242645U;
unsigned long long int var_2 = 11896510342243944413ULL;
unsigned long long int var_7 = 533559720019614018ULL;
short var_8 = (short)16253;
unsigned long long int var_9 = 2793841121005135742ULL;
short var_10 = (short)-15184;
unsigned long long int var_11 = 14764935099035426047ULL;
short var_12 = (short)26380;
int zero = 0;
short var_13 = (short)3167;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-3;
unsigned long long int var_16 = 11362609588444400008ULL;
_Bool var_17 = (_Bool)1;
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
