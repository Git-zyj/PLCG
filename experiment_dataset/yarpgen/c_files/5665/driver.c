#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30653;
short var_4 = (short)1285;
short var_7 = (short)-16014;
int zero = 0;
unsigned long long int var_15 = 5844683442195629191ULL;
unsigned char var_16 = (unsigned char)165;
long long int var_17 = 3799591841709156421LL;
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
