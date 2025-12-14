#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -787060160418096010LL;
signed char var_1 = (signed char)-88;
short var_2 = (short)22612;
_Bool var_3 = (_Bool)0;
signed char var_8 = (signed char)94;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
unsigned char var_11 = (unsigned char)165;
unsigned short var_12 = (unsigned short)5773;
void init() {
}

void checksum() {
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
