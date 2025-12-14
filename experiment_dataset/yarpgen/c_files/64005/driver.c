#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned char var_1 = (unsigned char)12;
signed char var_13 = (signed char)-6;
unsigned long long int var_14 = 3486988115673463262ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 14631216959439078712ULL;
int var_19 = -2133441577;
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
