#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)109;
signed char var_4 = (signed char)-95;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-100;
unsigned long long int var_8 = 1326536831265537203ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)40239;
short var_11 = (short)14533;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
