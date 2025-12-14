#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4162391815306769955ULL;
unsigned int var_5 = 2196939796U;
signed char var_8 = (signed char)9;
unsigned long long int var_9 = 10106527230242190426ULL;
int zero = 0;
unsigned int var_10 = 4040593977U;
int var_11 = -1982803450;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
