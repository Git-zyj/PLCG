#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)178;
unsigned long long int var_3 = 3426824402450079802ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 7150075621837453912ULL;
int zero = 0;
unsigned int var_20 = 4271350225U;
unsigned int var_21 = 4111800228U;
void init() {
}

void checksum() {
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
