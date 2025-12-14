#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3448305244497805467ULL;
int var_2 = 2076633505;
unsigned char var_5 = (unsigned char)147;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)68;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_15 = (short)8456;
unsigned char var_16 = (unsigned char)166;
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
