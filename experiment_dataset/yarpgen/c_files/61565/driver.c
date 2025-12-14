#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -211090795;
signed char var_4 = (signed char)124;
unsigned char var_8 = (unsigned char)143;
signed char var_12 = (signed char)93;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-16820;
unsigned int var_19 = 403059139U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
