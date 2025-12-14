#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5543;
short var_7 = (short)-26973;
int var_17 = -1721671883;
long long int var_18 = 4967654632727644317LL;
int zero = 0;
long long int var_20 = 3126773135452126215LL;
short var_21 = (short)-15766;
short var_22 = (short)-27496;
void init() {
}

void checksum() {
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
