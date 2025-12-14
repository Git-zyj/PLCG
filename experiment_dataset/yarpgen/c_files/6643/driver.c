#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
_Bool var_1 = (_Bool)0;
int var_5 = 1075170450;
unsigned int var_7 = 3573925752U;
unsigned short var_9 = (unsigned short)10513;
int zero = 0;
short var_16 = (short)26238;
int var_17 = -1688758836;
short var_18 = (short)-836;
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
