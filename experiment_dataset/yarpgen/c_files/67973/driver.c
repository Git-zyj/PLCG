#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8314686697445612808LL;
short var_6 = (short)-10201;
long long int var_7 = -6069852316541550567LL;
unsigned int var_8 = 4221159653U;
long long int var_9 = 2119185497148997578LL;
int zero = 0;
unsigned char var_10 = (unsigned char)122;
unsigned int var_11 = 3714604584U;
long long int var_12 = -674450693065780621LL;
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
