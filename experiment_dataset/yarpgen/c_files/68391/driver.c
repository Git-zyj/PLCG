#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3238324460400556311LL;
unsigned long long int var_8 = 7135137410594062548ULL;
unsigned int var_13 = 4239036068U;
int zero = 0;
unsigned long long int var_17 = 15176858938856308612ULL;
int var_18 = 478760979;
unsigned int var_19 = 1059406358U;
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
