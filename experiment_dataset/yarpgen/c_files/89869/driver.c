#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1797028818;
unsigned char var_1 = (unsigned char)58;
signed char var_5 = (signed char)81;
unsigned long long int var_6 = 6597848767404688854ULL;
signed char var_7 = (signed char)83;
unsigned char var_8 = (unsigned char)88;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 5186656510646801652ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1967;
long long int var_17 = 4869303170449346474LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
