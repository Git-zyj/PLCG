#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24579;
int var_8 = 353549237;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 6326884466569406918ULL;
unsigned short var_15 = (unsigned short)29223;
int zero = 0;
unsigned long long int var_19 = 2138948910345015609ULL;
signed char var_20 = (signed char)-47;
unsigned char var_21 = (unsigned char)201;
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
