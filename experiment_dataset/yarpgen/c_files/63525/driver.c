#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-17843;
unsigned char var_5 = (unsigned char)107;
long long int var_12 = -7881854250698106552LL;
unsigned char var_13 = (unsigned char)64;
int var_16 = -1079173406;
int var_18 = 919336674;
int zero = 0;
unsigned char var_19 = (unsigned char)101;
unsigned short var_20 = (unsigned short)53013;
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
