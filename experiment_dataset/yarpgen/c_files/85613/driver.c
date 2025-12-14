#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1823798974;
int var_1 = -2084944700;
int var_3 = 808421280;
unsigned short var_5 = (unsigned short)55356;
unsigned short var_6 = (unsigned short)38674;
long long int var_7 = -6584052552106708552LL;
int var_10 = 609935410;
int var_11 = 1487954441;
int zero = 0;
unsigned short var_12 = (unsigned short)48544;
unsigned short var_13 = (unsigned short)59947;
unsigned short var_14 = (unsigned short)30484;
int var_15 = 1167288238;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
