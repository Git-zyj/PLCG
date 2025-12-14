#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1551283509U;
_Bool var_3 = (_Bool)0;
signed char var_8 = (signed char)-113;
int var_10 = 757366237;
long long int var_11 = 4914181599378874296LL;
unsigned int var_13 = 3323502993U;
long long int var_16 = -7556931373320252831LL;
int zero = 0;
unsigned int var_17 = 278777221U;
unsigned short var_18 = (unsigned short)37200;
int var_19 = -462157896;
unsigned int var_20 = 1414036675U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
