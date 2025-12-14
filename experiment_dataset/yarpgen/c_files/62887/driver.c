#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 694105876287184915LL;
signed char var_5 = (signed char)-18;
unsigned long long int var_11 = 12745785393472144544ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-101;
unsigned int var_16 = 384081444U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
