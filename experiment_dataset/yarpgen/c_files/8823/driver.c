#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1805326137;
signed char var_2 = (signed char)-7;
unsigned int var_4 = 2798120774U;
int var_9 = 540140173;
int zero = 0;
unsigned short var_19 = (unsigned short)5641;
unsigned long long int var_20 = 9465459790524295199ULL;
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
