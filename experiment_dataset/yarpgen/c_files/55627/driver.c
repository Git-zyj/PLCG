#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -452480180;
long long int var_12 = 1011486429830378329LL;
long long int var_16 = -2525495831089847809LL;
int zero = 0;
signed char var_18 = (signed char)74;
short var_19 = (short)19282;
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
