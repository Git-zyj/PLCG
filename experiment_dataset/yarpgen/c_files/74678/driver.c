#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3910452060765766892LL;
unsigned int var_9 = 1308090347U;
unsigned char var_10 = (unsigned char)48;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)84;
int zero = 0;
signed char var_19 = (signed char)115;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3736277958U;
void init() {
}

void checksum() {
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
