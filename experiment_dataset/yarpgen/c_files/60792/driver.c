#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 241853608U;
signed char var_1 = (signed char)32;
int var_3 = 173863756;
unsigned int var_13 = 809103725U;
signed char var_14 = (signed char)119;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)44819;
int zero = 0;
signed char var_20 = (signed char)48;
unsigned short var_21 = (unsigned short)44508;
unsigned int var_22 = 3995403937U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
