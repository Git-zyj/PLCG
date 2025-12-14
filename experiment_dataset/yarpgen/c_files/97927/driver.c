#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1869157942;
short var_8 = (short)-19007;
int zero = 0;
unsigned long long int var_20 = 17477027672938630932ULL;
unsigned char var_21 = (unsigned char)189;
unsigned short var_22 = (unsigned short)44875;
void init() {
}

void checksum() {
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
