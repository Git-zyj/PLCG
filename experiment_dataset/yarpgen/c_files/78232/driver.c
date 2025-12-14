#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-93;
unsigned long long int var_5 = 15663700186849336954ULL;
_Bool var_7 = (_Bool)0;
int var_14 = -2046421420;
int zero = 0;
unsigned char var_16 = (unsigned char)67;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14125300179906764920ULL;
void init() {
}

void checksum() {
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
