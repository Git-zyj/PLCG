#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3956368581U;
signed char var_1 = (signed char)75;
long long int var_3 = -4716033624394442253LL;
int var_6 = 1471693189;
int zero = 0;
long long int var_12 = -6434882600559062945LL;
signed char var_13 = (signed char)-42;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
