#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
unsigned long long int var_6 = 14789764354207609784ULL;
short var_7 = (short)-20162;
signed char var_10 = (signed char)-73;
unsigned long long int var_13 = 14305053235973336793ULL;
int zero = 0;
unsigned int var_15 = 4111976865U;
unsigned long long int var_16 = 14862418790516152157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
