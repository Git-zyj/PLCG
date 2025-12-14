#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 989508396U;
unsigned char var_2 = (unsigned char)211;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 1983730282U;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
unsigned int var_17 = 858319630U;
unsigned int var_18 = 32890998U;
_Bool var_19 = (_Bool)0;
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
