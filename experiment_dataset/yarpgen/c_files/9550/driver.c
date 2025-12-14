#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)22659;
unsigned int var_11 = 1291084453U;
short var_13 = (short)-21764;
unsigned int var_14 = 1163377850U;
int zero = 0;
int var_16 = 83659998;
unsigned int var_17 = 3470911730U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
