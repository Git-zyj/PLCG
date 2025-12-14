#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-25835;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 11429545481535227657ULL;
short var_12 = (short)-19237;
unsigned long long int var_13 = 17949137304047040229ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)60680;
long long int var_16 = -705590292186924855LL;
unsigned short var_17 = (unsigned short)61042;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
