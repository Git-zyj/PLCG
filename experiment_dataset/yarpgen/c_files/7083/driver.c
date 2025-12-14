#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4948250928367120290LL;
long long int var_6 = 7696251335833737278LL;
long long int var_7 = -8148470980967000429LL;
long long int var_9 = -4841287908957950009LL;
long long int var_10 = -8298433231047403362LL;
long long int var_11 = -4897966876033087755LL;
int zero = 0;
long long int var_12 = 1631397918977010750LL;
long long int var_13 = -276778747739095333LL;
long long int var_14 = 2842417869296187827LL;
long long int var_15 = -1159386737345854809LL;
long long int var_16 = 3154790896822121565LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
