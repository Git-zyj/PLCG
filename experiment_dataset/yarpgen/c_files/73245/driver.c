#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned short var_2 = (unsigned short)53166;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)44745;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5194938559443735918LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
