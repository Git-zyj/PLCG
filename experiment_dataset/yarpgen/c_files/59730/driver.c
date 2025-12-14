#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
signed char var_2 = (signed char)3;
signed char var_4 = (signed char)-66;
signed char var_5 = (signed char)-11;
signed char var_7 = (signed char)116;
signed char var_8 = (signed char)-122;
signed char var_9 = (signed char)32;
signed char var_15 = (signed char)55;
int zero = 0;
signed char var_17 = (signed char)-46;
signed char var_18 = (signed char)-8;
void init() {
}

void checksum() {
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
