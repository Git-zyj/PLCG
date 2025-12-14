#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20892;
signed char var_2 = (signed char)-21;
signed char var_6 = (signed char)97;
short var_8 = (short)19123;
short var_10 = (short)-27983;
signed char var_11 = (signed char)-125;
long long int var_16 = 739055216108756633LL;
int zero = 0;
signed char var_18 = (signed char)-88;
short var_19 = (short)-28094;
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
