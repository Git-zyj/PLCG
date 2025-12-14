#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-5329;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 1092925849789413210ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 1045870728;
int zero = 0;
signed char var_11 = (signed char)-94;
unsigned int var_12 = 1958139066U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
