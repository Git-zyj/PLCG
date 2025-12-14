#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
signed char var_1 = (signed char)42;
signed char var_4 = (signed char)33;
signed char var_5 = (signed char)96;
signed char var_6 = (signed char)16;
signed char var_9 = (signed char)-49;
int zero = 0;
signed char var_12 = (signed char)2;
signed char var_13 = (signed char)32;
signed char var_14 = (signed char)-58;
signed char var_15 = (signed char)2;
void init() {
}

void checksum() {
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
