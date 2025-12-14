#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 316231821U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)32791;
int var_11 = -1076875013;
int zero = 0;
unsigned int var_13 = 2016625844U;
unsigned char var_14 = (unsigned char)175;
void init() {
}

void checksum() {
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
