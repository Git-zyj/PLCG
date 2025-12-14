#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 602938507U;
short var_1 = (short)23482;
signed char var_4 = (signed char)-88;
int var_5 = -770161701;
int zero = 0;
unsigned int var_11 = 1186565497U;
unsigned short var_12 = (unsigned short)32722;
unsigned short var_13 = (unsigned short)40356;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
