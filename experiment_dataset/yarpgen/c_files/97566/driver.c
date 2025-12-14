#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2079982725U;
short var_1 = (short)-10402;
signed char var_7 = (signed char)-92;
int var_8 = 1058482510;
signed char var_9 = (signed char)85;
unsigned char var_11 = (unsigned char)59;
int zero = 0;
int var_12 = 1734884790;
unsigned long long int var_13 = 13875575538116265571ULL;
unsigned char var_14 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
