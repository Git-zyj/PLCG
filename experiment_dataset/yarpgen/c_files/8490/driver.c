#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33429;
signed char var_5 = (signed char)-63;
long long int var_6 = 4382684030215609235LL;
unsigned long long int var_9 = 11765947722524384407ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-83;
unsigned long long int var_14 = 17173487371551263954ULL;
signed char var_15 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
