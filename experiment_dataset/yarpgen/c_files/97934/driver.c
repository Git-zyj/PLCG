#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16316406566895042830ULL;
long long int var_7 = -2648552572960028372LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-114;
unsigned int var_11 = 4014326013U;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7235092933939424598LL;
unsigned char var_15 = (unsigned char)60;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
