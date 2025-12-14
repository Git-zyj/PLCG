#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 55383960U;
unsigned int var_1 = 798922258U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3727070082U;
int var_5 = 1454426794;
unsigned short var_7 = (unsigned short)52049;
unsigned int var_8 = 4196458854U;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3979888285419833507LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2647544725U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
