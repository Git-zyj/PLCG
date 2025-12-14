#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 2740366930U;
int zero = 0;
unsigned char var_17 = (unsigned char)82;
unsigned long long int var_18 = 15406619536679780140ULL;
unsigned long long int var_19 = 10325810663063513934ULL;
unsigned long long int var_20 = 6031364356285035733ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
