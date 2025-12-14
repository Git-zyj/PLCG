#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 535524421U;
unsigned int var_4 = 3865143245U;
unsigned short var_5 = (unsigned short)30497;
unsigned short var_6 = (unsigned short)3077;
signed char var_8 = (signed char)-97;
int var_11 = -1708809102;
int zero = 0;
unsigned long long int var_17 = 1288465568864443375ULL;
unsigned int var_18 = 2607442515U;
int var_19 = -1514668276;
unsigned long long int var_20 = 9956304046443962290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
