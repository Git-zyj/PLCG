#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)42;
unsigned int var_9 = 790483232U;
unsigned char var_10 = (unsigned char)115;
unsigned char var_13 = (unsigned char)110;
int zero = 0;
int var_16 = -402138038;
unsigned int var_17 = 3094466488U;
_Bool var_18 = (_Bool)1;
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
