#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-22608;
signed char var_8 = (signed char)103;
int zero = 0;
signed char var_19 = (signed char)-51;
signed char var_20 = (signed char)65;
signed char var_21 = (signed char)-53;
unsigned short var_22 = (unsigned short)63960;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
