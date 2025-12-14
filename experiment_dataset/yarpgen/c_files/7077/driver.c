#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1739739879U;
unsigned char var_5 = (unsigned char)140;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_20 = 730816709;
unsigned char var_21 = (unsigned char)124;
_Bool var_22 = (_Bool)0;
int var_23 = -45943247;
unsigned char var_24 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
