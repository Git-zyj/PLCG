#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8765;
signed char var_6 = (signed char)-99;
unsigned char var_7 = (unsigned char)68;
int var_10 = -1438218052;
int zero = 0;
unsigned char var_11 = (unsigned char)37;
unsigned char var_12 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
