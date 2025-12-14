#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2132618577;
unsigned short var_2 = (unsigned short)30660;
int var_3 = 18343553;
int var_5 = -1612475300;
signed char var_7 = (signed char)-75;
signed char var_8 = (signed char)52;
int zero = 0;
int var_11 = -10424415;
int var_12 = 381244565;
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
