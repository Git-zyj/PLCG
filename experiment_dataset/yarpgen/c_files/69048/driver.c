#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17607199844048601976ULL;
unsigned long long int var_11 = 14122070421944928927ULL;
unsigned long long int var_15 = 2165316776584243386ULL;
int zero = 0;
unsigned long long int var_18 = 13870907545224791773ULL;
unsigned long long int var_19 = 5386686350817433194ULL;
unsigned long long int var_20 = 18289715317869136311ULL;
unsigned long long int var_21 = 11370869864330935358ULL;
unsigned long long int var_22 = 2079673245632337268ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
