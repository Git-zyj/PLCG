#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)3814;
signed char var_10 = (signed char)-69;
short var_14 = (short)-7657;
int zero = 0;
signed char var_18 = (signed char)19;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 330745909U;
short var_21 = (short)-1752;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
