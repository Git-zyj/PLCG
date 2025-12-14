#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3156927262U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)109;
int zero = 0;
unsigned int var_10 = 2039147440U;
unsigned int var_11 = 4213118553U;
signed char var_12 = (signed char)-61;
unsigned char var_13 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
