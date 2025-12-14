#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned long long int var_1 = 5540444260980566905ULL;
short var_5 = (short)17501;
unsigned int var_9 = 2777083135U;
int zero = 0;
short var_11 = (short)-12938;
unsigned char var_12 = (unsigned char)179;
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
