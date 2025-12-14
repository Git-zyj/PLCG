#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14875812152092811792ULL;
unsigned long long int var_4 = 15025394170299218032ULL;
unsigned char var_5 = (unsigned char)131;
int zero = 0;
short var_11 = (short)4236;
int var_12 = 403681649;
signed char var_13 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
