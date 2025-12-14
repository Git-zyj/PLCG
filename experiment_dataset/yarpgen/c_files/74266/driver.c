#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 442460140U;
unsigned long long int var_6 = 4305546918007980794ULL;
long long int var_7 = -6867711315833243329LL;
unsigned long long int var_9 = 6954427524145495514ULL;
unsigned long long int var_11 = 8918986492219796338ULL;
signed char var_12 = (signed char)27;
int zero = 0;
unsigned long long int var_13 = 13778649989721545261ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)5656;
unsigned short var_16 = (unsigned short)6848;
unsigned int var_17 = 3137474429U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
