#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1496864963U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)87;
unsigned long long int var_9 = 13121379233472555733ULL;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)96;
short var_17 = (short)-11659;
unsigned long long int var_18 = 11327782754147259039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
