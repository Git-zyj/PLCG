#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11148;
signed char var_2 = (signed char)4;
unsigned short var_3 = (unsigned short)1280;
short var_4 = (short)12994;
unsigned int var_6 = 3240489166U;
signed char var_7 = (signed char)-115;
unsigned int var_8 = 2872508982U;
unsigned int var_10 = 1646797820U;
int zero = 0;
unsigned char var_11 = (unsigned char)189;
unsigned int var_12 = 2819754362U;
unsigned int var_13 = 689540344U;
void init() {
}

void checksum() {
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
