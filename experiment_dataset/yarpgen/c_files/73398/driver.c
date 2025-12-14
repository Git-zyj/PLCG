#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27887;
unsigned char var_3 = (unsigned char)190;
unsigned char var_4 = (unsigned char)69;
unsigned long long int var_8 = 8014012341543900493ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)87;
unsigned short var_13 = (unsigned short)6332;
void init() {
}

void checksum() {
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
