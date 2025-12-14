#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned char var_4 = (unsigned char)61;
unsigned short var_6 = (unsigned short)49758;
unsigned char var_9 = (unsigned char)87;
unsigned char var_12 = (unsigned char)227;
int zero = 0;
int var_16 = -353696275;
_Bool var_17 = (_Bool)1;
short var_18 = (short)16196;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
