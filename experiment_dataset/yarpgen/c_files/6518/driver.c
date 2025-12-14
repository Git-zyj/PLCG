#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56157;
unsigned long long int var_4 = 15149532467325039652ULL;
long long int var_6 = 3319975842618416970LL;
_Bool var_11 = (_Bool)1;
long long int var_13 = 1945450535063661260LL;
short var_14 = (short)5683;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -5073572154502235218LL;
unsigned int var_18 = 1110951868U;
unsigned char var_19 = (unsigned char)156;
short var_20 = (short)-31818;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
