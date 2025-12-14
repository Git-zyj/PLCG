#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-24371;
unsigned int var_9 = 2167715732U;
short var_16 = (short)16165;
int var_18 = -546396733;
int zero = 0;
signed char var_19 = (signed char)-1;
short var_20 = (short)21698;
long long int var_21 = -865540097780430148LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
