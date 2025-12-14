#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9060471128952790084LL;
unsigned int var_4 = 1171899238U;
unsigned int var_11 = 23857274U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 12193094997617017649ULL;
long long int var_18 = 6444290716778289119LL;
unsigned int var_19 = 2862971676U;
short var_20 = (short)-17222;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
