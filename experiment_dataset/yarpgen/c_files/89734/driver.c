#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14455072104815775ULL;
_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-92;
long long int var_7 = 7560898047860858787LL;
unsigned short var_14 = (unsigned short)44034;
int zero = 0;
long long int var_16 = -5053381031000639968LL;
signed char var_17 = (signed char)-62;
void init() {
}

void checksum() {
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
