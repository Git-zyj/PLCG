#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned short var_7 = (unsigned short)4095;
int var_14 = -1149064767;
unsigned short var_15 = (unsigned short)30699;
int zero = 0;
signed char var_17 = (signed char)-28;
int var_18 = -1421007312;
unsigned short var_19 = (unsigned short)27082;
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
