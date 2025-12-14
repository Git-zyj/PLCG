#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)70;
int var_6 = 530760515;
int var_12 = -1702656402;
unsigned char var_16 = (unsigned char)191;
_Bool var_17 = (_Bool)1;
int var_18 = -1083359979;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1665533836U;
unsigned int var_21 = 1935676844U;
unsigned char var_22 = (unsigned char)203;
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
