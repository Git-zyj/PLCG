#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3426454740U;
short var_6 = (short)-30934;
int var_7 = -1230414809;
int var_11 = 1578224841;
signed char var_13 = (signed char)-79;
long long int var_16 = 6618093162015893999LL;
unsigned int var_18 = 1786832645U;
int zero = 0;
signed char var_19 = (signed char)73;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1552070181U;
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
