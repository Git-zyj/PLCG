#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14798025517211316888ULL;
unsigned long long int var_2 = 5972685103372945610ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 825013663U;
int zero = 0;
unsigned short var_10 = (unsigned short)38882;
signed char var_11 = (signed char)72;
unsigned short var_12 = (unsigned short)55940;
short var_13 = (short)21768;
unsigned short var_14 = (unsigned short)31819;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
