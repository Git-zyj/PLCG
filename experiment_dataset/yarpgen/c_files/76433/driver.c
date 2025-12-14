#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_8 = 49204790U;
unsigned long long int var_14 = 12222578765657093102ULL;
int zero = 0;
unsigned int var_18 = 1019031725U;
unsigned char var_19 = (unsigned char)19;
unsigned short var_20 = (unsigned short)42301;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
