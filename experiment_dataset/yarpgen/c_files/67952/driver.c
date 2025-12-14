#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15589869995345996639ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)205;
signed char var_5 = (signed char)-87;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)19;
int zero = 0;
unsigned short var_10 = (unsigned short)48434;
signed char var_11 = (signed char)82;
signed char var_12 = (signed char)-33;
signed char var_13 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
