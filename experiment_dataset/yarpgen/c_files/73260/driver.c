#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2086102468;
int var_2 = 236084497;
unsigned int var_10 = 1206738370U;
signed char var_13 = (signed char)99;
int zero = 0;
unsigned int var_18 = 2955763984U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)145;
unsigned long long int var_21 = 11525941936424609539ULL;
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
