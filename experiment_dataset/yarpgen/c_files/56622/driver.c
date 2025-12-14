#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
int var_2 = -218343228;
short var_3 = (short)-28971;
unsigned short var_8 = (unsigned short)9284;
int zero = 0;
unsigned int var_10 = 212007066U;
unsigned char var_11 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
