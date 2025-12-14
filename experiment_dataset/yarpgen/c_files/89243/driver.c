#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 911807127;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15257251446847636921ULL;
int var_4 = -2016409797;
int var_5 = -1389428654;
long long int var_7 = -7629741113254264899LL;
unsigned long long int var_8 = 8945556866531586495ULL;
unsigned char var_13 = (unsigned char)86;
short var_14 = (short)-32693;
int zero = 0;
unsigned long long int var_16 = 8949071319086557648ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -270631088;
int var_19 = -1511762543;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
