#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6639085663829294255ULL;
unsigned short var_2 = (unsigned short)23146;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)85;
int zero = 0;
long long int var_12 = -4365247416028984375LL;
unsigned long long int var_13 = 2478226210047056753ULL;
int var_14 = -115918668;
unsigned int var_15 = 477040051U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
