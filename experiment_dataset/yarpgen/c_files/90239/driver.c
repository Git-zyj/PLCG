#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8566638216905710387LL;
unsigned short var_7 = (unsigned short)22140;
unsigned char var_8 = (unsigned char)248;
unsigned int var_11 = 1751151191U;
unsigned short var_17 = (unsigned short)28510;
signed char var_18 = (signed char)88;
int zero = 0;
unsigned short var_20 = (unsigned short)64344;
unsigned long long int var_21 = 16572934981625960926ULL;
signed char var_22 = (signed char)-94;
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
