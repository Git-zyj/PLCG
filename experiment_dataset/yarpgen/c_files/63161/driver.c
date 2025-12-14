#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)6764;
unsigned long long int var_11 = 16062805310794249617ULL;
signed char var_13 = (signed char)-104;
int zero = 0;
short var_18 = (short)18763;
long long int var_19 = -3682563620381945871LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
