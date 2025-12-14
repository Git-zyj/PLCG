#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8036702306738189465ULL;
signed char var_3 = (signed char)-91;
unsigned long long int var_5 = 4596059446793421612ULL;
signed char var_7 = (signed char)-74;
unsigned int var_11 = 3288450488U;
long long int var_12 = 7091216146271286601LL;
unsigned int var_15 = 606798227U;
int var_16 = 1780692298;
signed char var_19 = (signed char)50;
int zero = 0;
unsigned long long int var_20 = 18186472003847320322ULL;
unsigned char var_21 = (unsigned char)45;
unsigned char var_22 = (unsigned char)84;
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
