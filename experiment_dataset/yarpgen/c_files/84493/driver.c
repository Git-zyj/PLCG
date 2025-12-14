#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4273864519U;
signed char var_7 = (signed char)-48;
unsigned int var_8 = 1531922181U;
unsigned int var_11 = 4066391665U;
int zero = 0;
unsigned long long int var_16 = 2664963985316779164ULL;
signed char var_17 = (signed char)89;
void init() {
}

void checksum() {
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
