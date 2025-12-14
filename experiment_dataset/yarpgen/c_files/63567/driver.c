#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6215;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)12;
signed char var_8 = (signed char)16;
int zero = 0;
unsigned long long int var_11 = 8469920396820501659ULL;
unsigned int var_12 = 1924472506U;
unsigned char var_13 = (unsigned char)228;
void init() {
}

void checksum() {
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
