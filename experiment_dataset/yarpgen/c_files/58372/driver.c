#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned long long int var_4 = 2312425984422536305ULL;
unsigned long long int var_9 = 13718999343160961535ULL;
short var_12 = (short)-3379;
unsigned int var_13 = 4164808315U;
int zero = 0;
signed char var_17 = (signed char)34;
unsigned char var_18 = (unsigned char)231;
short var_19 = (short)31074;
void init() {
}

void checksum() {
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
