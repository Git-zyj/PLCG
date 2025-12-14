#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 396286252737394371ULL;
short var_3 = (short)11673;
unsigned long long int var_4 = 12831084740050123390ULL;
int var_7 = 747645858;
long long int var_12 = -6644984073728033767LL;
long long int var_13 = 8298968351903295817LL;
int zero = 0;
long long int var_14 = 6732305778186549763LL;
short var_15 = (short)-21862;
unsigned long long int var_16 = 3164632463035645129ULL;
short var_17 = (short)26551;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
