#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3731196128U;
unsigned char var_2 = (unsigned char)183;
signed char var_5 = (signed char)-18;
unsigned int var_6 = 3785930535U;
_Bool var_7 = (_Bool)1;
int var_8 = 1987823575;
unsigned char var_9 = (unsigned char)101;
int zero = 0;
signed char var_16 = (signed char)-1;
unsigned int var_17 = 2346823485U;
unsigned char var_18 = (unsigned char)59;
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
