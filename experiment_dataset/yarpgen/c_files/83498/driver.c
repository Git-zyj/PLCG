#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3458469564U;
unsigned long long int var_4 = 15298522407685888446ULL;
unsigned long long int var_5 = 12951155227972248054ULL;
unsigned int var_13 = 3579715075U;
int zero = 0;
signed char var_14 = (signed char)-121;
unsigned long long int var_15 = 5503221977025926087ULL;
unsigned long long int var_16 = 14611797407616757193ULL;
void init() {
}

void checksum() {
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
