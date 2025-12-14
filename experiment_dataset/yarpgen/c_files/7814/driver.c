#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
signed char var_4 = (signed char)90;
signed char var_5 = (signed char)-113;
signed char var_13 = (signed char)-110;
signed char var_14 = (signed char)2;
signed char var_16 = (signed char)1;
int zero = 0;
signed char var_19 = (signed char)117;
signed char var_20 = (signed char)-66;
signed char var_21 = (signed char)-60;
signed char var_22 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
