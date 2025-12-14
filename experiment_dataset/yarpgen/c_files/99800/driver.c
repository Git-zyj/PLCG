#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10391877065978673530ULL;
unsigned long long int var_1 = 13370041894682686331ULL;
unsigned long long int var_2 = 15329562179066309192ULL;
unsigned long long int var_5 = 17668390452794093348ULL;
unsigned long long int var_11 = 5204356801230030789ULL;
unsigned long long int var_12 = 18143047233103484146ULL;
int zero = 0;
unsigned long long int var_16 = 8990715606055757471ULL;
unsigned long long int var_17 = 7919314303869469038ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
