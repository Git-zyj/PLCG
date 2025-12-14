#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
int var_2 = 1678806787;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)13;
long long int var_7 = 1152565773959151565LL;
unsigned short var_8 = (unsigned short)5740;
unsigned int var_9 = 2094684304U;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
unsigned long long int var_15 = 18023308890170061136ULL;
unsigned short var_16 = (unsigned short)63184;
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
