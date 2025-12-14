#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1976304151;
unsigned short var_4 = (unsigned short)26466;
int zero = 0;
int var_15 = -1282052496;
int var_16 = -2005301427;
signed char var_17 = (signed char)-41;
signed char var_18 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
