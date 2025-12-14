#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8885423018203130718LL;
unsigned long long int var_9 = 9202580949426574168ULL;
int zero = 0;
unsigned long long int var_13 = 16883279806106028594ULL;
signed char var_14 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
