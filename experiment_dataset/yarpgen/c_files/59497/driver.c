#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1708750854U;
long long int var_4 = -4650682956868802728LL;
long long int var_5 = 6185498646332139988LL;
unsigned char var_6 = (unsigned char)151;
short var_9 = (short)8616;
int zero = 0;
unsigned int var_11 = 603864001U;
unsigned long long int var_12 = 13843540097646278849ULL;
long long int var_13 = 8565634017663592877LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
