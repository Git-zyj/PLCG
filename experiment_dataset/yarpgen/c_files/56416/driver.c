#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)77;
unsigned long long int var_4 = 14454664901398180406ULL;
long long int var_11 = -2919820047317749999LL;
signed char var_13 = (signed char)-109;
int zero = 0;
short var_17 = (short)12772;
signed char var_18 = (signed char)(-127 - 1);
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
