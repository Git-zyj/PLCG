#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56633;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10305704181682020967ULL;
signed char var_12 = (signed char)8;
int zero = 0;
signed char var_18 = (signed char)-127;
int var_19 = 1968927119;
unsigned char var_20 = (unsigned char)175;
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
