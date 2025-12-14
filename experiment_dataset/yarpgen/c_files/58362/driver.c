#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19884;
signed char var_4 = (signed char)-87;
unsigned int var_5 = 3422641482U;
unsigned char var_6 = (unsigned char)24;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)57;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)67;
signed char var_14 = (signed char)-52;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
