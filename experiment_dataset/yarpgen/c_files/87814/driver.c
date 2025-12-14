#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
int var_4 = 455685638;
signed char var_8 = (signed char)-19;
short var_11 = (short)-14909;
signed char var_12 = (signed char)-80;
unsigned int var_15 = 4183908532U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
