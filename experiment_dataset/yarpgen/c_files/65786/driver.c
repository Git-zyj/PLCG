#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3367296780U;
unsigned int var_3 = 709348951U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 522959969U;
int var_11 = -1549839246;
signed char var_12 = (signed char)-31;
unsigned int var_13 = 2592047448U;
long long int var_14 = 935889706362940761LL;
int zero = 0;
unsigned long long int var_15 = 5226713621372660641ULL;
int var_16 = 1213671214;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
