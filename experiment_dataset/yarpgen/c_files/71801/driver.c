#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5919319508080207457LL;
short var_4 = (short)-21035;
unsigned char var_8 = (unsigned char)159;
int zero = 0;
unsigned long long int var_15 = 55451553916221224ULL;
long long int var_16 = 544457495909128327LL;
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
