#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13593;
short var_5 = (short)4506;
unsigned char var_7 = (unsigned char)192;
short var_8 = (short)-11352;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3429639403U;
int var_14 = 258451256;
_Bool var_15 = (_Bool)1;
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
