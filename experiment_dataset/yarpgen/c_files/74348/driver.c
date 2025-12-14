#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
unsigned long long int var_4 = 15096262570140066222ULL;
unsigned char var_9 = (unsigned char)61;
signed char var_10 = (signed char)34;
int zero = 0;
unsigned short var_20 = (unsigned short)10691;
unsigned long long int var_21 = 6717374778965120959ULL;
unsigned int var_22 = 3276371755U;
unsigned long long int var_23 = 397255996257603444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
