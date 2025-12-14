#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 2654134893U;
unsigned int var_5 = 3093910483U;
unsigned long long int var_8 = 243752953780100794ULL;
int zero = 0;
unsigned long long int var_11 = 14883291548336268517ULL;
int var_12 = 709041508;
unsigned int var_13 = 3975034284U;
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
