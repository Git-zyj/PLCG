#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)42;
signed char var_3 = (signed char)117;
int var_8 = 1812066137;
short var_10 = (short)-4507;
int var_16 = 179205255;
signed char var_17 = (signed char)-113;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4024318419336048212LL;
int var_20 = -294214162;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
