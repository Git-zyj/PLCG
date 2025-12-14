#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)155;
unsigned long long int var_10 = 9847142232133737687ULL;
unsigned int var_13 = 476214162U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6620059092015538549ULL;
int zero = 0;
unsigned int var_18 = 230063004U;
unsigned int var_19 = 297117380U;
unsigned int var_20 = 4235745239U;
short var_21 = (short)-16499;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
