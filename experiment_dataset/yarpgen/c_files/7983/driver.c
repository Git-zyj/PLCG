#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1902796092;
unsigned int var_7 = 473475045U;
unsigned long long int var_14 = 7115305986746228629ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)30;
int zero = 0;
unsigned char var_18 = (unsigned char)130;
unsigned int var_19 = 955697317U;
unsigned char var_20 = (unsigned char)216;
unsigned char var_21 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
