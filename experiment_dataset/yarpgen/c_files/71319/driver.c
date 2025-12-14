#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4829121944174251128ULL;
unsigned long long int var_2 = 15636695059468664430ULL;
unsigned int var_5 = 493745975U;
unsigned long long int var_7 = 11174839592675927491ULL;
unsigned long long int var_9 = 4000142535711624359ULL;
int zero = 0;
unsigned long long int var_12 = 14449398857878218641ULL;
unsigned long long int var_13 = 16097308192603349735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
