#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42497;
unsigned long long int var_7 = 4612740717283014524ULL;
short var_14 = (short)6416;
int zero = 0;
int var_15 = 626991818;
unsigned long long int var_16 = 3217153473015475722ULL;
unsigned short var_17 = (unsigned short)44057;
unsigned short var_18 = (unsigned short)32887;
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
