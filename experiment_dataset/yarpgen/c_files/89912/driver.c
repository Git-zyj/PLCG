#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 116443189;
unsigned short var_6 = (unsigned short)31363;
int var_14 = -1910351085;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 292125527;
unsigned short var_18 = (unsigned short)38375;
void init() {
}

void checksum() {
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
