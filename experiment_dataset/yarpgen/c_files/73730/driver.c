#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
int var_3 = -2039632686;
short var_6 = (short)-10759;
unsigned int var_8 = 161478584U;
unsigned long long int var_12 = 10796003672645026796ULL;
short var_13 = (short)9024;
unsigned char var_15 = (unsigned char)50;
int zero = 0;
short var_19 = (short)-18062;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
