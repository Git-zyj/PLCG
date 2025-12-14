#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)64554;
signed char var_5 = (signed char)97;
signed char var_7 = (signed char)-66;
unsigned int var_8 = 1426111743U;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
signed char var_13 = (signed char)-25;
signed char var_14 = (signed char)80;
signed char var_15 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
