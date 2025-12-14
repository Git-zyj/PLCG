#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19475;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)95;
unsigned long long int var_12 = 9001802857572954061ULL;
int var_14 = -1482669620;
int zero = 0;
unsigned long long int var_15 = 14448422089389944183ULL;
signed char var_16 = (signed char)-4;
unsigned short var_17 = (unsigned short)57408;
long long int var_18 = 8923399590335930018LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
