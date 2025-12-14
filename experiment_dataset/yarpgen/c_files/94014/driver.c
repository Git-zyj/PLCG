#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)3825;
unsigned char var_12 = (unsigned char)11;
int zero = 0;
unsigned long long int var_19 = 14150181238349496378ULL;
unsigned long long int var_20 = 2932384654965319627ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-20827;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
