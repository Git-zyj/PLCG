#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)85;
unsigned long long int var_5 = 15672298712798333237ULL;
signed char var_10 = (signed char)70;
unsigned short var_12 = (unsigned short)45726;
unsigned char var_14 = (unsigned char)236;
unsigned int var_15 = 3931875443U;
unsigned char var_16 = (unsigned char)131;
int zero = 0;
unsigned short var_18 = (unsigned short)17438;
unsigned short var_19 = (unsigned short)44410;
int var_20 = -638696777;
unsigned long long int var_21 = 6229196815775094444ULL;
void init() {
}

void checksum() {
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
