#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
_Bool var_1 = (_Bool)0;
int var_4 = -1574053595;
unsigned int var_7 = 2783501751U;
signed char var_14 = (signed char)1;
int var_15 = -401119226;
int zero = 0;
unsigned char var_19 = (unsigned char)132;
signed char var_20 = (signed char)-124;
int var_21 = 1723097699;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
