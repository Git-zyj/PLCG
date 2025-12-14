#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3295;
unsigned int var_6 = 675222695U;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)6;
signed char var_13 = (signed char)59;
int zero = 0;
unsigned long long int var_14 = 10036771525437375853ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
