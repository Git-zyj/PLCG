#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16912;
unsigned int var_15 = 3690636833U;
int zero = 0;
unsigned char var_17 = (unsigned char)157;
int var_18 = 1045315852;
short var_19 = (short)-1912;
unsigned char var_20 = (unsigned char)3;
long long int var_21 = 5279956590943449252LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
