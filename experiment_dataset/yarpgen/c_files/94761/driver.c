#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1716406693;
signed char var_1 = (signed char)22;
short var_2 = (short)-20973;
unsigned short var_7 = (unsigned short)33665;
int var_9 = -912067838;
int zero = 0;
signed char var_12 = (signed char)26;
unsigned char var_13 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
