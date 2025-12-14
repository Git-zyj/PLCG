#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned short var_1 = (unsigned short)49644;
long long int var_2 = 5283907168317754691LL;
long long int var_6 = 1243387541815401645LL;
unsigned int var_11 = 3372556499U;
unsigned char var_12 = (unsigned char)10;
short var_14 = (short)7922;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_17 = -680578252;
int var_18 = 1144645182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
