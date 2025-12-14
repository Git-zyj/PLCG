#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2201661635U;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
unsigned int var_15 = 4261080618U;
signed char var_16 = (signed char)-93;
unsigned int var_17 = 1342648403U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
