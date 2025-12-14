#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31249;
unsigned int var_2 = 1790667781U;
unsigned short var_3 = (unsigned short)46261;
int var_6 = -1820518781;
short var_7 = (short)-5510;
long long int var_8 = -1083647950508868270LL;
int zero = 0;
long long int var_10 = -7895049715670458149LL;
int var_11 = -1947207920;
long long int var_12 = 8898091106683077985LL;
signed char var_13 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
