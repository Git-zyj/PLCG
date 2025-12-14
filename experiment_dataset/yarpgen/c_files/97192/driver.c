#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)59932;
int var_8 = 1168409678;
signed char var_9 = (signed char)44;
unsigned long long int var_10 = 17812706066708222493ULL;
unsigned long long int var_11 = 12396748105793329353ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1556051691;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)68;
int var_17 = -247460092;
void init() {
}

void checksum() {
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
