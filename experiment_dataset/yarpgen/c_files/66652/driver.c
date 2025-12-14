#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1115655225U;
unsigned short var_3 = (unsigned short)32203;
int var_5 = 104308296;
unsigned short var_6 = (unsigned short)47356;
int zero = 0;
unsigned int var_11 = 4044080198U;
int var_12 = -86015286;
unsigned int var_13 = 1161600545U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
