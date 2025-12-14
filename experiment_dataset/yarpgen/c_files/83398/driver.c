#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2097487211U;
long long int var_5 = -2960848225380512924LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)157;
unsigned int var_8 = 2830492280U;
short var_9 = (short)-12150;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
signed char var_14 = (signed char)-30;
short var_15 = (short)-26013;
void init() {
}

void checksum() {
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
