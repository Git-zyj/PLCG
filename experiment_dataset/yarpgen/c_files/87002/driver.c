#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-103;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 12036471514633594111ULL;
int zero = 0;
unsigned long long int var_18 = 9810540430030903747ULL;
unsigned short var_19 = (unsigned short)50786;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
