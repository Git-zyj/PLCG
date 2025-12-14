#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
unsigned char var_5 = (unsigned char)213;
unsigned char var_7 = (unsigned char)48;
signed char var_9 = (signed char)-76;
int zero = 0;
unsigned int var_14 = 4284119712U;
unsigned int var_15 = 3770689302U;
unsigned char var_16 = (unsigned char)165;
unsigned short var_17 = (unsigned short)24954;
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
