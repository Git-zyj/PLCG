#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10440;
int var_3 = -1385842891;
short var_5 = (short)-24770;
unsigned short var_9 = (unsigned short)17811;
unsigned char var_10 = (unsigned char)208;
unsigned long long int var_11 = 15441766797993943142ULL;
unsigned int var_14 = 50428801U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)126;
int var_18 = -1624336229;
_Bool var_19 = (_Bool)0;
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
