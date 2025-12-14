#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3440076140U;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)32259;
unsigned int var_12 = 1865287093U;
int zero = 0;
unsigned short var_13 = (unsigned short)13253;
unsigned short var_14 = (unsigned short)36957;
signed char var_15 = (signed char)-6;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
