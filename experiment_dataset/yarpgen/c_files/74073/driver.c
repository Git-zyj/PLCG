#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = -551016020;
int var_7 = -1080527651;
unsigned int var_13 = 865579874U;
unsigned short var_15 = (unsigned short)43173;
unsigned int var_17 = 3159354020U;
int zero = 0;
unsigned short var_18 = (unsigned short)56113;
unsigned short var_19 = (unsigned short)3169;
void init() {
}

void checksum() {
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
