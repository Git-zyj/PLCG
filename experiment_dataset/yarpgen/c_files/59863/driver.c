#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6441852750880008277ULL;
signed char var_6 = (signed char)19;
unsigned char var_9 = (unsigned char)184;
short var_10 = (short)-27951;
unsigned char var_14 = (unsigned char)167;
int zero = 0;
unsigned long long int var_20 = 4737673987715777822ULL;
unsigned short var_21 = (unsigned short)55239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
