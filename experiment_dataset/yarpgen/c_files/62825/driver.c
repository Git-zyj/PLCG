#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14821;
short var_4 = (short)-7325;
int var_8 = -1980098025;
unsigned long long int var_9 = 11077409228184319699ULL;
long long int var_10 = 6505938097744914607LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 6755234310004703902ULL;
int zero = 0;
int var_17 = -124080166;
short var_18 = (short)29702;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
