#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)66;
signed char var_4 = (signed char)3;
signed char var_6 = (signed char)-113;
unsigned long long int var_8 = 12651854430771967749ULL;
long long int var_9 = -3553000232637970018LL;
unsigned long long int var_10 = 11594555008466774449ULL;
unsigned long long int var_11 = 14477089148276906018ULL;
unsigned long long int var_12 = 3320107946103448735ULL;
int zero = 0;
unsigned long long int var_13 = 2086815257075832857ULL;
signed char var_14 = (signed char)52;
long long int var_15 = -7957292024535162873LL;
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
