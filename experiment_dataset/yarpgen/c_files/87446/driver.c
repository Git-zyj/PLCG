#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1848942864U;
unsigned int var_4 = 578599730U;
unsigned int var_10 = 403519699U;
unsigned long long int var_11 = 2841303227993194375ULL;
unsigned long long int var_12 = 698346716449590252ULL;
int zero = 0;
unsigned long long int var_13 = 17726109296108742387ULL;
unsigned long long int var_14 = 6238875632114672956ULL;
unsigned int var_15 = 4189037071U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
