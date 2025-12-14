#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3008;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)53;
long long int var_12 = 962576469608125672LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = -2259615279259575631LL;
short var_19 = (short)15391;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
