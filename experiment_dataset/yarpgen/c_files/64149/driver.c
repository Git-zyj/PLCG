#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47150;
long long int var_1 = -4685134498201145397LL;
unsigned long long int var_2 = 3259260568033859389ULL;
unsigned int var_3 = 2299557434U;
signed char var_6 = (signed char)-26;
unsigned short var_8 = (unsigned short)45011;
long long int var_10 = 4332995705428561365LL;
int zero = 0;
signed char var_19 = (signed char)-22;
unsigned long long int var_20 = 4879038376269355267ULL;
void init() {
}

void checksum() {
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
