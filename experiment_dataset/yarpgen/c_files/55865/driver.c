#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21547;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 11796790638242278003ULL;
int zero = 0;
long long int var_17 = 1620160649681971946LL;
long long int var_18 = -2939719275673152728LL;
int var_19 = 1790864970;
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
