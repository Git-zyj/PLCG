#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1237363013U;
long long int var_10 = 8553008612890780292LL;
unsigned short var_13 = (unsigned short)37569;
unsigned char var_15 = (unsigned char)194;
_Bool var_16 = (_Bool)1;
int var_17 = 493948542;
int var_18 = -984291996;
int zero = 0;
unsigned long long int var_20 = 15421167362511066181ULL;
unsigned int var_21 = 1764624185U;
unsigned int var_22 = 2742268949U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
