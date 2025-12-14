#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
long long int var_2 = 2924469745947248620LL;
int var_5 = 2105837898;
long long int var_8 = -2014736430747817918LL;
signed char var_11 = (signed char)-96;
int zero = 0;
int var_18 = 1923228086;
long long int var_19 = 6798790372652345247LL;
signed char var_20 = (signed char)-11;
unsigned int var_21 = 1710572898U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
