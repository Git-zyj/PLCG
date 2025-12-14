#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 708301780U;
signed char var_5 = (signed char)-116;
unsigned int var_8 = 40674255U;
long long int var_9 = 2951674829282384946LL;
int zero = 0;
unsigned long long int var_17 = 7377562172845968669ULL;
signed char var_18 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
