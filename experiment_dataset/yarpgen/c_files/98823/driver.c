#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3777740794584591225LL;
short var_7 = (short)-31159;
unsigned short var_16 = (unsigned short)56428;
int zero = 0;
short var_18 = (short)27198;
int var_19 = -1643532993;
long long int var_20 = 5518437493102055811LL;
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
