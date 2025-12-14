#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6754519464787810368ULL;
int var_1 = -2117077516;
unsigned int var_7 = 1390885495U;
signed char var_9 = (signed char)-1;
int var_10 = -1084993237;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)43;
unsigned short var_17 = (unsigned short)49114;
int zero = 0;
unsigned int var_20 = 4284892905U;
unsigned char var_21 = (unsigned char)141;
_Bool var_22 = (_Bool)0;
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
