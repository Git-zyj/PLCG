#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned short var_6 = (unsigned short)36034;
unsigned int var_7 = 2597439968U;
unsigned short var_9 = (unsigned short)36782;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 367924647;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1948625908U;
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
