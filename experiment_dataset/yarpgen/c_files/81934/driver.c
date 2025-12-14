#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22961;
int var_5 = 123132056;
unsigned char var_7 = (unsigned char)42;
unsigned char var_15 = (unsigned char)91;
int zero = 0;
int var_16 = 555401234;
short var_17 = (short)-934;
signed char var_18 = (signed char)23;
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
