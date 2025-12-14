#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3648002884941638359ULL;
unsigned int var_6 = 1718713005U;
int var_7 = 1083093170;
_Bool var_9 = (_Bool)1;
int var_11 = 1665620925;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
signed char var_15 = (signed char)-60;
unsigned int var_16 = 3049141599U;
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
