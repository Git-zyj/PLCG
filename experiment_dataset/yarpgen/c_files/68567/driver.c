#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6614195456553651989LL;
signed char var_6 = (signed char)-102;
unsigned long long int var_7 = 16528159613355837000ULL;
short var_10 = (short)-29989;
int zero = 0;
unsigned short var_17 = (unsigned short)38805;
unsigned char var_18 = (unsigned char)39;
void init() {
}

void checksum() {
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
