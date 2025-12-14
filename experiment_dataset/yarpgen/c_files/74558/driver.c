#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1372641224;
unsigned long long int var_2 = 12305648446804735530ULL;
unsigned char var_3 = (unsigned char)160;
int var_4 = 1293709226;
unsigned short var_5 = (unsigned short)45504;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)22132;
unsigned long long int var_8 = 16998253594371714106ULL;
int var_9 = 1419009287;
int var_11 = 1466128530;
int zero = 0;
unsigned int var_12 = 3742184080U;
short var_13 = (short)-13571;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)16223;
unsigned int var_16 = 758136752U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
