#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)252;
unsigned short var_8 = (unsigned short)54419;
signed char var_9 = (signed char)11;
int zero = 0;
unsigned long long int var_11 = 13902257909447785191ULL;
unsigned int var_12 = 372535813U;
unsigned long long int var_13 = 9708402613708190317ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
