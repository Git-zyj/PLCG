#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2995371375U;
unsigned char var_11 = (unsigned char)132;
signed char var_12 = (signed char)-83;
int zero = 0;
int var_14 = -1359940039;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1622866414U;
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
