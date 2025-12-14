#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2281027601U;
_Bool var_4 = (_Bool)1;
long long int var_10 = -7763330183565785248LL;
long long int var_11 = 1543038428737270972LL;
unsigned int var_12 = 1355022638U;
int var_13 = 404632272;
int zero = 0;
long long int var_14 = -163989589343926031LL;
long long int var_15 = 5769695443216239317LL;
void init() {
}

void checksum() {
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
