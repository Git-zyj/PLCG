#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-95;
signed char var_6 = (signed char)50;
signed char var_9 = (signed char)-61;
unsigned int var_10 = 604881530U;
signed char var_11 = (signed char)-92;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
long long int var_15 = -4008775216273590102LL;
unsigned char var_16 = (unsigned char)97;
void init() {
}

void checksum() {
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
