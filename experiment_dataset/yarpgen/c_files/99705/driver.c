#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32650;
long long int var_6 = -7444764553096415318LL;
unsigned int var_7 = 2654073517U;
unsigned char var_9 = (unsigned char)22;
unsigned char var_11 = (unsigned char)77;
unsigned char var_12 = (unsigned char)176;
unsigned char var_17 = (unsigned char)13;
signed char var_18 = (signed char)29;
unsigned long long int var_19 = 3377835629533043456ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)4661;
unsigned short var_21 = (unsigned short)56942;
long long int var_22 = -8243931683470036729LL;
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
