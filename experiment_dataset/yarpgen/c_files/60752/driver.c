#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 46707272;
int var_13 = -88795151;
unsigned short var_14 = (unsigned short)54581;
long long int var_15 = 5905372649628023595LL;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
int var_17 = -922694906;
unsigned int var_18 = 3452794786U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
