#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 153400049;
signed char var_4 = (signed char)-13;
signed char var_6 = (signed char)-119;
long long int var_7 = -6018117060067584345LL;
signed char var_8 = (signed char)-17;
int zero = 0;
unsigned char var_11 = (unsigned char)204;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16653766579299639576ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
