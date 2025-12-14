#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10552474467297347750ULL;
unsigned char var_4 = (unsigned char)3;
long long int var_6 = 2563013355006818359LL;
signed char var_7 = (signed char)-123;
unsigned char var_8 = (unsigned char)39;
unsigned char var_10 = (unsigned char)67;
int zero = 0;
int var_12 = -95110270;
unsigned long long int var_13 = 12929697510345602994ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
