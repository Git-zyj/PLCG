#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-109;
unsigned int var_6 = 3466284688U;
unsigned char var_7 = (unsigned char)192;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1468296545;
short var_15 = (short)18866;
unsigned char var_16 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
