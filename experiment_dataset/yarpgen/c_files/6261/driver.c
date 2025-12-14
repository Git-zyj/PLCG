#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9989;
unsigned int var_7 = 2728729252U;
unsigned char var_11 = (unsigned char)222;
unsigned short var_12 = (unsigned short)38278;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
long long int var_14 = 893377798537205311LL;
long long int var_15 = 2194100013810142972LL;
signed char var_16 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
