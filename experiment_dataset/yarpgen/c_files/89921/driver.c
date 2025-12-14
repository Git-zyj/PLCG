#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1072040552U;
unsigned int var_10 = 3880661889U;
long long int var_11 = 3634450952598632720LL;
int zero = 0;
long long int var_12 = -2427807230910255171LL;
unsigned short var_13 = (unsigned short)41498;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
