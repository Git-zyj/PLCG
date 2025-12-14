#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 2049410247;
signed char var_3 = (signed char)23;
signed char var_4 = (signed char)110;
short var_5 = (short)15447;
unsigned char var_6 = (unsigned char)118;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-6778;
unsigned char var_9 = (unsigned char)167;
signed char var_10 = (signed char)-43;
unsigned short var_12 = (unsigned short)20883;
int zero = 0;
int var_14 = -1578448666;
short var_15 = (short)-1078;
signed char var_16 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
