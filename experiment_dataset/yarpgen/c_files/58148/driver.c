#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned int var_1 = 4109634414U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3696281066U;
unsigned int var_11 = 959838475U;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 3910792403U;
int zero = 0;
unsigned int var_20 = 1994896151U;
unsigned int var_21 = 3125644113U;
unsigned int var_22 = 2960016967U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
