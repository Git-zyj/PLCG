#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
int var_3 = -1412016508;
signed char var_5 = (signed char)14;
unsigned char var_11 = (unsigned char)89;
int zero = 0;
unsigned char var_16 = (unsigned char)204;
short var_17 = (short)-32180;
short var_18 = (short)-7100;
short var_19 = (short)-5893;
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
