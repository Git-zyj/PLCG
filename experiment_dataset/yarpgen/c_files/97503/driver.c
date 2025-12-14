#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_15 = 640573131U;
unsigned long long int var_17 = 13951972530536058296ULL;
unsigned short var_19 = (unsigned short)52799;
int zero = 0;
unsigned int var_20 = 2319689739U;
unsigned short var_21 = (unsigned short)56988;
unsigned long long int var_22 = 14687976235992610860ULL;
unsigned int var_23 = 4224784158U;
unsigned char var_24 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
