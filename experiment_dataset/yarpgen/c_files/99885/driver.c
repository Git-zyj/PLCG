#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31396;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-6146;
unsigned char var_9 = (unsigned char)48;
unsigned long long int var_14 = 6216864435395288122ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-47;
void init() {
}

void checksum() {
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
