#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-95;
signed char var_5 = (signed char)-35;
unsigned int var_12 = 286153638U;
unsigned long long int var_16 = 16195709800295677113ULL;
int zero = 0;
short var_19 = (short)27765;
int var_20 = 1496651175;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
