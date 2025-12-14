#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4608656167294894212LL;
long long int var_9 = -3312024094219473190LL;
unsigned int var_11 = 627146414U;
unsigned int var_14 = 1459883705U;
int zero = 0;
int var_15 = -1039357390;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7498640251654183217LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
