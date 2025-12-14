#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)90;
short var_3 = (short)-23894;
signed char var_4 = (signed char)-101;
signed char var_6 = (signed char)-80;
int var_7 = 1970028989;
int var_10 = 166534243;
int zero = 0;
int var_11 = -375553282;
long long int var_12 = 4028669255484988497LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
