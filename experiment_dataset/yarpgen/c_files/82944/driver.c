#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3190256221494474349LL;
short var_3 = (short)-3888;
signed char var_4 = (signed char)-102;
signed char var_5 = (signed char)29;
unsigned int var_7 = 1755986105U;
int var_14 = 1840923129;
short var_15 = (short)17909;
int zero = 0;
signed char var_17 = (signed char)20;
signed char var_18 = (signed char)-62;
signed char var_19 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
