#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3273296068U;
_Bool var_3 = (_Bool)0;
unsigned short var_11 = (unsigned short)35527;
int zero = 0;
unsigned int var_12 = 2996012403U;
signed char var_13 = (signed char)74;
unsigned char var_14 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
