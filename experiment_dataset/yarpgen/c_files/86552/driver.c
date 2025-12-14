#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13940564703017423107ULL;
unsigned int var_5 = 258962657U;
unsigned int var_12 = 3326132092U;
long long int var_16 = -6726133774043414669LL;
int zero = 0;
unsigned int var_18 = 3934759381U;
short var_19 = (short)-21293;
short var_20 = (short)-28982;
short var_21 = (short)-23240;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
