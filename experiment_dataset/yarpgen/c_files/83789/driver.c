#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)128;
unsigned short var_5 = (unsigned short)44625;
unsigned long long int var_6 = 16707691222298602789ULL;
unsigned char var_8 = (unsigned char)71;
unsigned short var_9 = (unsigned short)26033;
unsigned char var_10 = (unsigned char)105;
int zero = 0;
unsigned short var_12 = (unsigned short)38939;
unsigned short var_13 = (unsigned short)36338;
unsigned long long int var_14 = 12852259262621886084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
