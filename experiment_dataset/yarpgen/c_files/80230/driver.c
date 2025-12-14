#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
signed char var_6 = (signed char)-74;
signed char var_7 = (signed char)9;
signed char var_10 = (signed char)65;
signed char var_11 = (signed char)4;
signed char var_12 = (signed char)119;
int zero = 0;
signed char var_18 = (signed char)-87;
signed char var_19 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
