#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned long long int var_1 = 2049392678952203950ULL;
signed char var_4 = (signed char)45;
unsigned long long int var_5 = 12670835998731833117ULL;
signed char var_7 = (signed char)12;
signed char var_10 = (signed char)-21;
int zero = 0;
long long int var_13 = -4565745059220326093LL;
int var_14 = 1393924588;
int var_15 = -1094706482;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
