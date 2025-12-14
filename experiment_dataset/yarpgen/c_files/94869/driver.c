#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3717083612U;
unsigned char var_4 = (unsigned char)158;
unsigned int var_7 = 2302578200U;
int var_8 = -574030226;
int var_9 = -1915136274;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14356568412602603185ULL;
int var_12 = 1403229557;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
