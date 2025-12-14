#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 759017056U;
unsigned int var_5 = 3494433913U;
signed char var_6 = (signed char)62;
unsigned int var_7 = 117281751U;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 3192075618395444306LL;
signed char var_12 = (signed char)-24;
signed char var_13 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
