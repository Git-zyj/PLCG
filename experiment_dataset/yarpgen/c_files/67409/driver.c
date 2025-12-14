#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2004243461U;
unsigned long long int var_1 = 13384472695506822989ULL;
long long int var_4 = -2966243356965353581LL;
unsigned int var_7 = 2775447693U;
unsigned int var_8 = 2899774910U;
unsigned int var_9 = 1883040130U;
int zero = 0;
long long int var_11 = -2951999167249408352LL;
unsigned char var_12 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
