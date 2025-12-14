#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
signed char var_3 = (signed char)54;
unsigned char var_5 = (unsigned char)119;
unsigned char var_10 = (unsigned char)115;
long long int var_11 = 5801963347057840663LL;
int zero = 0;
short var_12 = (short)-9377;
unsigned char var_13 = (unsigned char)98;
unsigned long long int var_14 = 14672664121401270269ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
