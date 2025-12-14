#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2022421106U;
int var_4 = 907497301;
unsigned int var_6 = 3487137480U;
int var_7 = 968675595;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-32112;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2545867674U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
