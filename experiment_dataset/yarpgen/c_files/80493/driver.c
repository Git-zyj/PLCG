#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned short var_3 = (unsigned short)29480;
signed char var_4 = (signed char)-13;
unsigned short var_8 = (unsigned short)7876;
unsigned long long int var_9 = 17993597989590880931ULL;
unsigned short var_10 = (unsigned short)12694;
long long int var_14 = 8701459892849972156LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2353578628U;
void init() {
}

void checksum() {
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
