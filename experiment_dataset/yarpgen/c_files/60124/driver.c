#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16807408737818548088ULL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)5;
signed char var_7 = (signed char)111;
int zero = 0;
signed char var_15 = (signed char)111;
unsigned short var_16 = (unsigned short)57660;
void init() {
}

void checksum() {
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
