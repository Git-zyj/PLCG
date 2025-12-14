#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
unsigned int var_4 = 2517256625U;
short var_5 = (short)1183;
unsigned int var_6 = 1415927637U;
unsigned short var_9 = (unsigned short)58194;
unsigned int var_10 = 3606908652U;
int zero = 0;
short var_12 = (short)4726;
unsigned int var_13 = 404483464U;
unsigned short var_14 = (unsigned short)317;
void init() {
}

void checksum() {
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
