#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
int var_6 = 1510150727;
unsigned short var_14 = (unsigned short)38941;
int zero = 0;
int var_17 = -1103812465;
unsigned int var_18 = 4055889815U;
unsigned short var_19 = (unsigned short)11560;
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
