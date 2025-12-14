#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3674420117U;
unsigned long long int var_5 = 13101506393012886939ULL;
unsigned short var_7 = (unsigned short)36468;
long long int var_8 = 6106140592444726409LL;
unsigned long long int var_10 = 4944442955479415260ULL;
int zero = 0;
unsigned int var_11 = 3725951423U;
unsigned long long int var_12 = 9254109187208349982ULL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)144;
unsigned short var_15 = (unsigned short)279;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
