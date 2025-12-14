#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned char var_1 = (unsigned char)13;
unsigned char var_2 = (unsigned char)84;
unsigned char var_3 = (unsigned char)171;
unsigned char var_8 = (unsigned char)15;
unsigned char var_9 = (unsigned char)182;
unsigned char var_11 = (unsigned char)174;
unsigned char var_12 = (unsigned char)230;
unsigned char var_13 = (unsigned char)186;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
unsigned char var_15 = (unsigned char)241;
unsigned char var_16 = (unsigned char)254;
unsigned char var_17 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
