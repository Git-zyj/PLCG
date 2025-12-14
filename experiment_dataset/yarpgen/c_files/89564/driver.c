#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20205;
unsigned int var_5 = 2235575124U;
int var_6 = 1060415713;
long long int var_10 = -7825851556259218606LL;
unsigned int var_11 = 1649318077U;
int var_12 = 850674580;
unsigned int var_14 = 1646073570U;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 1132334342;
int var_17 = 796813963;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
