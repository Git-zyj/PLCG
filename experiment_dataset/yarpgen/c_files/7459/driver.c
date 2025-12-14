#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)47;
unsigned char var_6 = (unsigned char)56;
unsigned char var_7 = (unsigned char)37;
_Bool var_14 = (_Bool)0;
short var_18 = (short)19497;
short var_19 = (short)19221;
int zero = 0;
unsigned char var_20 = (unsigned char)115;
signed char var_21 = (signed char)44;
void init() {
}

void checksum() {
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
