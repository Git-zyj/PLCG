#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22982;
long long int var_1 = -521757223775340391LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 8069990303953343971ULL;
short var_7 = (short)29346;
unsigned short var_10 = (unsigned short)13608;
unsigned char var_13 = (unsigned char)247;
unsigned int var_14 = 52715301U;
unsigned long long int var_16 = 7106620471803065550ULL;
int zero = 0;
unsigned long long int var_17 = 15404361906531229690ULL;
signed char var_18 = (signed char)118;
signed char var_19 = (signed char)21;
void init() {
}

void checksum() {
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
