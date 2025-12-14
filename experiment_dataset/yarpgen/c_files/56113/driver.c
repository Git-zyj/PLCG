#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1968499338U;
unsigned int var_5 = 3783341544U;
unsigned short var_10 = (unsigned short)33989;
long long int var_13 = 6443521007877722641LL;
long long int var_16 = 9085132987183304706LL;
int zero = 0;
long long int var_17 = -1795557026606479875LL;
unsigned short var_18 = (unsigned short)32632;
unsigned short var_19 = (unsigned short)62297;
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
