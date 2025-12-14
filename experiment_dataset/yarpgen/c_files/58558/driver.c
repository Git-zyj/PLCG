#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18981;
signed char var_2 = (signed char)-52;
_Bool var_3 = (_Bool)1;
short var_5 = (short)10766;
unsigned short var_6 = (unsigned short)37544;
signed char var_7 = (signed char)-85;
unsigned short var_8 = (unsigned short)34846;
int zero = 0;
short var_11 = (short)16198;
short var_12 = (short)-22581;
short var_13 = (short)15888;
short var_14 = (short)-2866;
void init() {
}

void checksum() {
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
