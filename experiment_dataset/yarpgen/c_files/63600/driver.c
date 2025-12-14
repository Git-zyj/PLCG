#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = 7406384184575992007LL;
unsigned int var_5 = 1525826038U;
unsigned long long int var_8 = 15629459857268098863ULL;
int zero = 0;
int var_14 = 2078410318;
unsigned long long int var_15 = 17625760858446453752ULL;
long long int var_16 = -2388204165598614018LL;
unsigned long long int var_17 = 4663556872851522757ULL;
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
