#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 848662168563993252ULL;
long long int var_10 = 306859401939753443LL;
unsigned char var_13 = (unsigned char)79;
int var_14 = 1829584033;
unsigned short var_15 = (unsigned short)14966;
int zero = 0;
int var_20 = -1973435297;
long long int var_21 = -6495981662206312457LL;
unsigned char var_22 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
