#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)115;
short var_3 = (short)-25173;
unsigned long long int var_5 = 8182492796969429237ULL;
unsigned char var_8 = (unsigned char)165;
short var_9 = (short)-28527;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)79;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10865054003230957994ULL;
unsigned long long int var_16 = 13456379228752041933ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)139;
int var_19 = -1983684689;
int var_20 = -1533577110;
unsigned long long int var_21 = 16475275263828694065ULL;
_Bool var_22 = (_Bool)0;
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
