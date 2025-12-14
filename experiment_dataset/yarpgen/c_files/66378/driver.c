#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5318;
unsigned short var_1 = (unsigned short)22053;
signed char var_4 = (signed char)109;
short var_5 = (short)-4386;
unsigned short var_7 = (unsigned short)9993;
unsigned int var_12 = 3613397283U;
int var_13 = -324291538;
signed char var_15 = (signed char)118;
int zero = 0;
signed char var_16 = (signed char)95;
int var_17 = -2083746304;
unsigned char var_18 = (unsigned char)222;
long long int var_19 = 5292903049273986064LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
