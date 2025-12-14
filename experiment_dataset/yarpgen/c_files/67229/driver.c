#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3379;
int var_2 = -1656500480;
signed char var_4 = (signed char)124;
short var_6 = (short)-21177;
short var_7 = (short)-27563;
short var_8 = (short)-22617;
short var_10 = (short)-6336;
signed char var_12 = (signed char)-22;
unsigned char var_14 = (unsigned char)254;
signed char var_15 = (signed char)82;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)71;
signed char var_18 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
