#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 390488820;
signed char var_4 = (signed char)83;
int var_5 = -753019560;
unsigned char var_7 = (unsigned char)12;
signed char var_10 = (signed char)-110;
unsigned char var_15 = (unsigned char)89;
int zero = 0;
int var_16 = -690826459;
unsigned char var_17 = (unsigned char)87;
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
