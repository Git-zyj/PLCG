#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 4367749702161728086ULL;
unsigned short var_7 = (unsigned short)42830;
unsigned long long int var_9 = 11640907159968587895ULL;
unsigned char var_10 = (unsigned char)246;
int var_11 = -1521519532;
unsigned int var_12 = 2233135475U;
int zero = 0;
unsigned int var_15 = 3905838292U;
unsigned char var_16 = (unsigned char)82;
int var_17 = 104923009;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
