#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2583864088U;
unsigned int var_2 = 1332246257U;
int var_4 = -699618784;
unsigned int var_10 = 1441696087U;
signed char var_12 = (signed char)86;
signed char var_13 = (signed char)-18;
int zero = 0;
signed char var_19 = (signed char)-20;
unsigned int var_20 = 1348735644U;
unsigned long long int var_21 = 6622007721323447372ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
