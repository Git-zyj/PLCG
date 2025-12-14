#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 347474885U;
unsigned int var_4 = 2864053729U;
unsigned short var_9 = (unsigned short)30129;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-86;
int zero = 0;
signed char var_20 = (signed char)117;
unsigned int var_21 = 2781689703U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
