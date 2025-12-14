#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2608;
unsigned long long int var_15 = 14023828271873847578ULL;
int zero = 0;
signed char var_17 = (signed char)-109;
signed char var_18 = (signed char)98;
signed char var_19 = (signed char)30;
signed char var_20 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
