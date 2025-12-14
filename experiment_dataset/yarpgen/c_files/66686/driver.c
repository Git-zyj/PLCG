#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17149;
unsigned long long int var_3 = 16266141890559909523ULL;
unsigned char var_4 = (unsigned char)98;
unsigned char var_6 = (unsigned char)78;
short var_7 = (short)-9997;
_Bool var_8 = (_Bool)0;
short var_10 = (short)25828;
unsigned char var_11 = (unsigned char)102;
unsigned char var_12 = (unsigned char)53;
int zero = 0;
unsigned long long int var_13 = 12636970513194847396ULL;
unsigned char var_14 = (unsigned char)152;
signed char var_15 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
