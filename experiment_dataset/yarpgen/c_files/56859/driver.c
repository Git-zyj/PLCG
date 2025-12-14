#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 45234778284980399LL;
short var_1 = (short)14257;
short var_2 = (short)26442;
short var_3 = (short)5985;
short var_9 = (short)5221;
unsigned long long int var_10 = 15903774882137358900ULL;
int zero = 0;
signed char var_12 = (signed char)-110;
short var_13 = (short)19842;
short var_14 = (short)-28672;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
