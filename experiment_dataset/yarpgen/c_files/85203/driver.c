#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48643;
int var_4 = -909076677;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5480970102657268123ULL;
long long int var_9 = -3645185934940951094LL;
signed char var_11 = (signed char)-22;
int zero = 0;
unsigned int var_13 = 501900940U;
long long int var_14 = -3887583169105383187LL;
long long int var_15 = 4715724427441420013LL;
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
