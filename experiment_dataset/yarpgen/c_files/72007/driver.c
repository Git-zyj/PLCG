#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3873335162U;
_Bool var_4 = (_Bool)0;
int var_5 = 287200408;
short var_6 = (short)-32477;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)118;
int zero = 0;
int var_11 = -2111698853;
unsigned long long int var_12 = 15779616465543064001ULL;
unsigned long long int var_13 = 6852104845241771014ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 804215545271392533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
