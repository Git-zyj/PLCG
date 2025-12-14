#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8867384142096843447LL;
long long int var_3 = -6458894166103715976LL;
long long int var_4 = -4649987630629286004LL;
long long int var_5 = -3300446177517338797LL;
long long int var_6 = 6565113618095568203LL;
long long int var_7 = 8559465105437149839LL;
long long int var_10 = -897932671049503549LL;
int zero = 0;
int var_11 = 2044347651;
long long int var_12 = 6278236895751827125LL;
long long int var_13 = 547269192085501037LL;
long long int var_14 = 3083158027658849767LL;
long long int var_15 = 6184087447874778185LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
