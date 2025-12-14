#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3770382366026477738LL;
long long int var_5 = -1437393144804022682LL;
signed char var_7 = (signed char)113;
signed char var_10 = (signed char)-112;
long long int var_11 = 5996528371055784554LL;
int zero = 0;
long long int var_13 = 4610815773025896453LL;
signed char var_14 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
