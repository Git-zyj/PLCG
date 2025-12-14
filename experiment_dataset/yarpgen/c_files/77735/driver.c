#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
long long int var_3 = 2783240197747508973LL;
unsigned int var_6 = 984500220U;
int zero = 0;
unsigned long long int var_12 = 8013375191011849140ULL;
unsigned long long int var_13 = 14851491140026457968ULL;
unsigned char var_14 = (unsigned char)99;
unsigned int var_15 = 996625264U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
