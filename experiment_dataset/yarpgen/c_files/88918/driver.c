#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)1;
short var_5 = (short)-11713;
unsigned long long int var_6 = 16916099871167340974ULL;
int var_13 = 551199266;
long long int var_15 = -8749834317533016381LL;
short var_16 = (short)-5036;
int zero = 0;
signed char var_17 = (signed char)24;
short var_18 = (short)4038;
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
