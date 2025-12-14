#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -125321136;
short var_10 = (short)9546;
int zero = 0;
unsigned long long int var_11 = 114610482738000752ULL;
unsigned char var_12 = (unsigned char)225;
unsigned char var_13 = (unsigned char)34;
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
