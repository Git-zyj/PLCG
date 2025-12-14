#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -932751687;
int var_6 = 1329383958;
unsigned long long int var_16 = 4652122234771259544ULL;
int zero = 0;
int var_17 = -1996807515;
int var_18 = 647229195;
unsigned long long int var_19 = 10266606961168967658ULL;
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
