#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16233748217734259072ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 984483389U;
signed char var_5 = (signed char)-28;
unsigned short var_7 = (unsigned short)58717;
signed char var_8 = (signed char)87;
unsigned int var_9 = 1260223085U;
int zero = 0;
int var_11 = 1233617189;
unsigned short var_12 = (unsigned short)8123;
unsigned short var_13 = (unsigned short)12600;
signed char var_14 = (signed char)-36;
short var_15 = (short)-12405;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
