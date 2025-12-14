#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-670;
_Bool var_10 = (_Bool)0;
short var_12 = (short)24907;
unsigned long long int var_14 = 13096346993847525949ULL;
unsigned long long int var_18 = 3209139567293355192ULL;
int zero = 0;
int var_20 = 204687269;
short var_21 = (short)-16810;
unsigned char var_22 = (unsigned char)139;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
