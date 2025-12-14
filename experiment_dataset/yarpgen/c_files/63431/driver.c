#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
signed char var_2 = (signed char)-21;
signed char var_5 = (signed char)-99;
signed char var_8 = (signed char)39;
signed char var_9 = (signed char)-122;
signed char var_11 = (signed char)115;
signed char var_17 = (signed char)-64;
int zero = 0;
signed char var_20 = (signed char)127;
signed char var_21 = (signed char)-114;
void init() {
}

void checksum() {
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
