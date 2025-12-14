#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
signed char var_3 = (signed char)-126;
unsigned long long int var_4 = 2447726135090326465ULL;
int var_5 = -452777835;
signed char var_7 = (signed char)-70;
unsigned long long int var_8 = 1129750612674651352ULL;
int var_9 = 1118581643;
int zero = 0;
long long int var_12 = -7049404282669432617LL;
unsigned long long int var_13 = 15375655385138964672ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
