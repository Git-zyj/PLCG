#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5618993131593734178LL;
short var_4 = (short)-2997;
short var_15 = (short)-24546;
long long int var_18 = 1491156303909994603LL;
int zero = 0;
signed char var_20 = (signed char)-33;
signed char var_21 = (signed char)68;
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
