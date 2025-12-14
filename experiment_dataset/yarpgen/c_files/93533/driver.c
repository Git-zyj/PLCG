#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)63;
long long int var_9 = -2021545535845590275LL;
unsigned char var_10 = (unsigned char)18;
int zero = 0;
signed char var_11 = (signed char)-61;
unsigned int var_12 = 4196116761U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
