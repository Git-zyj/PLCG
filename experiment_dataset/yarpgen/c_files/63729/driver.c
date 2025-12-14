#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14855;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_17 = 9719813234495908192ULL;
int zero = 0;
unsigned long long int var_20 = 13504256360020589838ULL;
unsigned int var_21 = 3678771104U;
unsigned int var_22 = 3021017300U;
void init() {
}

void checksum() {
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
