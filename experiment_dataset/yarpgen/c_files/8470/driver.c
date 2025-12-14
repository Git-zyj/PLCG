#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)8426;
int var_10 = -410766440;
unsigned char var_13 = (unsigned char)215;
unsigned long long int var_17 = 7309938939109762247ULL;
int var_19 = -153933102;
int zero = 0;
signed char var_20 = (signed char)45;
long long int var_21 = 4926689821079666674LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
