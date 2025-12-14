#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)157;
short var_12 = (short)-5490;
unsigned char var_14 = (unsigned char)47;
int zero = 0;
unsigned char var_15 = (unsigned char)22;
unsigned char var_16 = (unsigned char)195;
short var_17 = (short)-30818;
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
