#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 3140698146U;
unsigned char var_15 = (unsigned char)144;
unsigned long long int var_16 = 15042750564444052660ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)149;
short var_21 = (short)32141;
unsigned long long int var_22 = 12713484084156253382ULL;
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
