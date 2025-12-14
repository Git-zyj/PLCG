#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1965350514U;
int var_5 = 379823797;
unsigned int var_6 = 4230613734U;
unsigned int var_8 = 1703185336U;
int zero = 0;
unsigned char var_10 = (unsigned char)114;
unsigned short var_11 = (unsigned short)6003;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
