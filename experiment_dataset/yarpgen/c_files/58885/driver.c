#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1198219218;
int var_7 = -2026571711;
unsigned char var_10 = (unsigned char)45;
unsigned short var_14 = (unsigned short)35038;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-25837;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
