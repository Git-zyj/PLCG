#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1151420014;
long long int var_1 = -3863069413322066491LL;
unsigned long long int var_3 = 9338288739618365389ULL;
long long int var_4 = 5961813456499152430LL;
long long int var_8 = -5384052428484614421LL;
int var_14 = 1498795248;
unsigned short var_15 = (unsigned short)36879;
int zero = 0;
unsigned long long int var_20 = 5802577655185194895ULL;
unsigned int var_21 = 1155794649U;
signed char var_22 = (signed char)96;
unsigned long long int var_23 = 13883532115682504799ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
