#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5575552189762728165LL;
long long int var_5 = 540965687186277006LL;
long long int var_7 = 6106952102068242989LL;
signed char var_12 = (signed char)62;
long long int var_17 = 6531005022709899083LL;
int zero = 0;
signed char var_18 = (signed char)68;
signed char var_19 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
