#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6556093854869880113LL;
unsigned long long int var_6 = 10585221846440025090ULL;
unsigned int var_9 = 3561408892U;
signed char var_11 = (signed char)29;
unsigned int var_13 = 4172240556U;
int zero = 0;
long long int var_14 = -6414295110244014464LL;
unsigned int var_15 = 2468768710U;
long long int var_16 = -4718740362848100525LL;
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
