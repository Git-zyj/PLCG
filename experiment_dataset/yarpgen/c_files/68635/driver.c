#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_11 = 4010798500940780681LL;
unsigned char var_12 = (unsigned char)160;
int zero = 0;
signed char var_16 = (signed char)-8;
long long int var_17 = -8650206433337995764LL;
void init() {
}

void checksum() {
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
