#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 92636438;
short var_3 = (short)11616;
unsigned long long int var_4 = 11368049573073430359ULL;
long long int var_5 = 6310090309348834653LL;
unsigned short var_6 = (unsigned short)58826;
unsigned char var_9 = (unsigned char)192;
int zero = 0;
unsigned long long int var_10 = 10865070556343391874ULL;
unsigned char var_11 = (unsigned char)122;
long long int var_12 = -8433092361984838373LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
