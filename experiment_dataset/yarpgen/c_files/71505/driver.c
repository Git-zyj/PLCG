#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 733182594U;
signed char var_6 = (signed char)124;
unsigned short var_10 = (unsigned short)665;
unsigned short var_11 = (unsigned short)14007;
unsigned long long int var_13 = 10194685953881111320ULL;
unsigned int var_14 = 2514982433U;
unsigned char var_16 = (unsigned char)207;
int zero = 0;
signed char var_19 = (signed char)50;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
