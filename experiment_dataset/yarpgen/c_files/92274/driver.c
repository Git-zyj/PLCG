#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14027048417332568974ULL;
unsigned long long int var_2 = 7331285712025184325ULL;
unsigned long long int var_6 = 18445261859124797907ULL;
int zero = 0;
int var_11 = -1022683204;
int var_12 = -975070642;
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
