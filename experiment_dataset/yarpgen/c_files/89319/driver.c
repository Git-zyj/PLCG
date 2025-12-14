#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1733317363;
long long int var_4 = 2996576169090671397LL;
signed char var_6 = (signed char)-29;
signed char var_7 = (signed char)71;
unsigned char var_11 = (unsigned char)62;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -2068817769;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
