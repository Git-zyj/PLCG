#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 119073295057436214LL;
unsigned long long int var_3 = 15381831899774388993ULL;
unsigned short var_5 = (unsigned short)1551;
unsigned long long int var_11 = 11653589057848977472ULL;
long long int var_14 = -6954600657649942993LL;
long long int var_15 = 2426628242909098996LL;
int zero = 0;
unsigned char var_17 = (unsigned char)215;
long long int var_18 = -7732988369688761485LL;
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
