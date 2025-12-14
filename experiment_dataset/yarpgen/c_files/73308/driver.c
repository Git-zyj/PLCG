#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12030822283839182623ULL;
unsigned long long int var_12 = 2363845386172894426ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)245;
unsigned long long int var_19 = 3784056751681588920ULL;
void init() {
}

void checksum() {
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
