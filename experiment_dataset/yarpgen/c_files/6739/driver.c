#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_9 = (signed char)-55;
unsigned char var_15 = (unsigned char)186;
unsigned int var_16 = 4016761322U;
short var_17 = (short)364;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)58;
unsigned char var_22 = (unsigned char)202;
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
