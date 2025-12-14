#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4443820761324202440LL;
signed char var_16 = (signed char)-103;
unsigned int var_17 = 672752374U;
int zero = 0;
long long int var_18 = -2367327262288357825LL;
unsigned long long int var_19 = 11270118339925984592ULL;
short var_20 = (short)-23849;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
