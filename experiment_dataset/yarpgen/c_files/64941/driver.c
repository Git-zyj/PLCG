#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
short var_2 = (short)-18703;
unsigned int var_3 = 2032403659U;
signed char var_4 = (signed char)-26;
int var_8 = 702543325;
short var_9 = (short)21761;
long long int var_13 = -1378099910296678584LL;
int zero = 0;
unsigned short var_15 = (unsigned short)51703;
short var_16 = (short)-9866;
signed char var_17 = (signed char)83;
void init() {
}

void checksum() {
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
