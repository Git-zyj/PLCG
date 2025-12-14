#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 4163866908U;
signed char var_13 = (signed char)112;
int zero = 0;
unsigned int var_18 = 4211194258U;
unsigned int var_19 = 3776284762U;
unsigned int var_20 = 1021655496U;
unsigned int var_21 = 3669918194U;
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
