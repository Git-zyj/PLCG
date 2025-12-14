#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)43592;
short var_7 = (short)4910;
unsigned char var_8 = (unsigned char)209;
short var_9 = (short)-15535;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2277495465096942232ULL;
long long int var_12 = 6094321975116214130LL;
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
