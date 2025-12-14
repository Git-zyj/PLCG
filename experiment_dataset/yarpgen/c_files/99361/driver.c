#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)(-127 - 1);
unsigned short var_6 = (unsigned short)24496;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)31959;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 2340093231413845370ULL;
signed char var_12 = (signed char)77;
unsigned short var_15 = (unsigned short)37663;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 576897646811580385ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
