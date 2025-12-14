#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5037955749115894755LL;
unsigned long long int var_6 = 10516288554245105108ULL;
signed char var_8 = (signed char)-25;
int var_11 = -1792223812;
int zero = 0;
long long int var_15 = 4112374582812822106LL;
unsigned long long int var_16 = 16440963551173299087ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
