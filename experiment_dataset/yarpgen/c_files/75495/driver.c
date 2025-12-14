#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13587;
unsigned long long int var_5 = 14552883624828278235ULL;
long long int var_9 = -5464757452559767718LL;
unsigned short var_10 = (unsigned short)24279;
int zero = 0;
unsigned short var_13 = (unsigned short)14950;
signed char var_14 = (signed char)-99;
void init() {
}

void checksum() {
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
