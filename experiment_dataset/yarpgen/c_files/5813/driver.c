#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
unsigned char var_5 = (unsigned char)189;
unsigned long long int var_6 = 1362017073732329174ULL;
int var_7 = 328197796;
long long int var_10 = 5383448994904103403LL;
int zero = 0;
unsigned char var_12 = (unsigned char)215;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)21;
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
