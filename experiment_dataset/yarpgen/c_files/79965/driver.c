#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned long long int var_1 = 7582251447386691494ULL;
signed char var_9 = (signed char)56;
int zero = 0;
unsigned long long int var_18 = 420003136374302447ULL;
unsigned int var_19 = 1865098134U;
int var_20 = -803854875;
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
