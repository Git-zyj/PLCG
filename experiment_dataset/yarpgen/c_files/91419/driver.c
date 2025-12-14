#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1706302881;
short var_3 = (short)-19602;
signed char var_5 = (signed char)51;
short var_7 = (short)-19747;
short var_8 = (short)28344;
unsigned int var_9 = 627782328U;
int zero = 0;
unsigned short var_11 = (unsigned short)1403;
int var_12 = 641840646;
short var_13 = (short)-15155;
short var_14 = (short)-31160;
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
