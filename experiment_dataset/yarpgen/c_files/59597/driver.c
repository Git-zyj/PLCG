#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)17;
unsigned int var_6 = 2636299647U;
signed char var_8 = (signed char)46;
signed char var_9 = (signed char)49;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2368162023775602555ULL;
unsigned int var_13 = 3627567144U;
signed char var_14 = (signed char)111;
unsigned char var_15 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
