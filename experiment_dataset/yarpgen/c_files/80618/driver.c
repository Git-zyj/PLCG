#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
long long int var_2 = -1956814477467775855LL;
unsigned int var_3 = 1426517334U;
unsigned long long int var_4 = 4897231103264098175ULL;
unsigned char var_5 = (unsigned char)38;
unsigned short var_7 = (unsigned short)22756;
_Bool var_8 = (_Bool)0;
int var_9 = 222796303;
int zero = 0;
unsigned long long int var_10 = 11876725374530572681ULL;
long long int var_11 = -5141947610814634163LL;
short var_12 = (short)-32461;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
