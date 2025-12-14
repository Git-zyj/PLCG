#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)60;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int var_16 = -1359580330;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)64421;
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
