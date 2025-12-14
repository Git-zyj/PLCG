#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 17454247569877358142ULL;
unsigned char var_8 = (unsigned char)109;
long long int var_9 = 170038996528545287LL;
signed char var_10 = (signed char)102;
int zero = 0;
long long int var_13 = -4309860147001465644LL;
_Bool var_14 = (_Bool)0;
int var_15 = 638154741;
signed char var_16 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
