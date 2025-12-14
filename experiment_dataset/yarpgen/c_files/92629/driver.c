#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15717;
unsigned int var_6 = 593810256U;
long long int var_8 = 8495982732781967535LL;
unsigned char var_14 = (unsigned char)143;
int var_15 = -1017832046;
int zero = 0;
int var_18 = 996615316;
signed char var_19 = (signed char)115;
unsigned long long int var_20 = 16506609651600856107ULL;
void init() {
}

void checksum() {
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
