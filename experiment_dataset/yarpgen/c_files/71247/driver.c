#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5524031350478253089LL;
unsigned short var_2 = (unsigned short)54391;
short var_4 = (short)-32023;
unsigned short var_8 = (unsigned short)11821;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
signed char var_14 = (signed char)78;
long long int var_15 = 6524279482882111450LL;
signed char var_16 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
