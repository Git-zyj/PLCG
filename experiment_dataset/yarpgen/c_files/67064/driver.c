#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -183393673;
unsigned int var_1 = 1674859702U;
long long int var_6 = 946058102123408497LL;
short var_8 = (short)-2132;
unsigned int var_11 = 1662853384U;
int zero = 0;
unsigned char var_13 = (unsigned char)206;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
