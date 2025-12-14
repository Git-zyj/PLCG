#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21845;
unsigned short var_4 = (unsigned short)65430;
_Bool var_5 = (_Bool)0;
int var_7 = -2075404826;
signed char var_8 = (signed char)44;
int zero = 0;
signed char var_10 = (signed char)-124;
signed char var_11 = (signed char)-39;
short var_12 = (short)26400;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
