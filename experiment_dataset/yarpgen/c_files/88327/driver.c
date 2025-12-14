#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
signed char var_3 = (signed char)54;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-108;
unsigned char var_7 = (unsigned char)179;
signed char var_8 = (signed char)107;
unsigned char var_10 = (unsigned char)129;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)33;
signed char var_13 = (signed char)-68;
signed char var_14 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
