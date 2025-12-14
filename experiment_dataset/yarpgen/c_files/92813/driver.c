#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
_Bool var_6 = (_Bool)0;
long long int var_8 = 5138118229501089383LL;
signed char var_12 = (signed char)-113;
int zero = 0;
long long int var_17 = -6221484960409553409LL;
short var_18 = (short)28577;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
