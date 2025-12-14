#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -956791624;
long long int var_3 = -9070901936097409165LL;
long long int var_6 = -6019389035644526137LL;
int zero = 0;
unsigned short var_13 = (unsigned short)43585;
short var_14 = (short)1247;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
