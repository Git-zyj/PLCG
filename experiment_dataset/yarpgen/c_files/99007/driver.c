#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1304804872;
unsigned long long int var_2 = 13353187286381543607ULL;
int var_3 = 723034660;
unsigned long long int var_15 = 6794628686019669562ULL;
int zero = 0;
signed char var_16 = (signed char)-39;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 10945041381314940620ULL;
unsigned long long int var_19 = 15436055317092429326ULL;
int var_20 = -2112804545;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
