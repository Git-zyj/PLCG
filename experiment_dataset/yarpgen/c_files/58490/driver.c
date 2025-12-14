#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)44;
unsigned char var_5 = (unsigned char)128;
unsigned int var_6 = 2794147839U;
unsigned long long int var_12 = 18301948094294590292ULL;
int zero = 0;
signed char var_19 = (signed char)-9;
unsigned int var_20 = 2592006450U;
unsigned long long int var_21 = 7340628652879437032ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
