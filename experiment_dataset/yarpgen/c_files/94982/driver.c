#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2469691091505732720LL;
long long int var_2 = -3329620729341156918LL;
long long int var_4 = -2320971570717243353LL;
long long int var_6 = -7423228134928731252LL;
long long int var_8 = -4702298698714106632LL;
long long int var_9 = -8418918623561076526LL;
long long int var_10 = 7592736335342820194LL;
long long int var_12 = 5645092573745995573LL;
long long int var_17 = -2913687253577773360LL;
int zero = 0;
long long int var_20 = -1145652102486495513LL;
long long int var_21 = -4356916404005695465LL;
long long int var_22 = 5767545869668308110LL;
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
