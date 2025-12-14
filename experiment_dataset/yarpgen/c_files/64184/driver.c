#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4015817049697983428LL;
int var_14 = 1706739363;
unsigned int var_19 = 4189852089U;
int zero = 0;
signed char var_20 = (signed char)36;
unsigned short var_21 = (unsigned short)48447;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
