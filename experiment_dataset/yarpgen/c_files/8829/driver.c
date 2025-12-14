#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
short var_2 = (short)25487;
unsigned long long int var_3 = 890299182245289330ULL;
unsigned int var_4 = 765660976U;
signed char var_5 = (signed char)51;
int var_6 = 827921517;
short var_7 = (short)-16592;
short var_8 = (short)31571;
int zero = 0;
int var_10 = -1591535967;
unsigned short var_11 = (unsigned short)37099;
unsigned char var_12 = (unsigned char)192;
int var_13 = -5204410;
_Bool var_14 = (_Bool)0;
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
