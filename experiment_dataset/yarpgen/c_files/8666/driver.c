#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned char var_2 = (unsigned char)35;
unsigned long long int var_6 = 11395021787815108009ULL;
signed char var_7 = (signed char)96;
unsigned int var_9 = 115869810U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)58503;
signed char var_13 = (signed char)13;
unsigned char var_14 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
