#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -180801728;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2942148944U;
long long int var_6 = -558843486381999180LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-40;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
