#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned char var_1 = (unsigned char)92;
int var_2 = -200897365;
signed char var_8 = (signed char)56;
int var_11 = 847690381;
unsigned long long int var_12 = 2986575417284622191ULL;
int zero = 0;
unsigned long long int var_15 = 17690958835451262615ULL;
unsigned int var_16 = 3217189531U;
unsigned short var_17 = (unsigned short)33851;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
