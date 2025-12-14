#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)165;
unsigned char var_5 = (unsigned char)69;
short var_9 = (short)26891;
short var_11 = (short)-5462;
int zero = 0;
short var_13 = (short)9787;
unsigned char var_14 = (unsigned char)240;
unsigned char var_15 = (unsigned char)19;
unsigned int var_16 = 2209210889U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
