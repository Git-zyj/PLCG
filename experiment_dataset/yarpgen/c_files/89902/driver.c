#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
int var_2 = 2073998846;
short var_10 = (short)15757;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-110;
int zero = 0;
int var_17 = 1632711516;
unsigned char var_18 = (unsigned char)67;
unsigned char var_19 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
