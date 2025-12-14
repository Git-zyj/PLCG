#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7975201467530330168ULL;
unsigned long long int var_6 = 14408914427922540011ULL;
unsigned long long int var_7 = 13083442451432186605ULL;
unsigned long long int var_11 = 16739532575576929349ULL;
int zero = 0;
unsigned long long int var_15 = 1739034078057653500ULL;
unsigned long long int var_16 = 7558972914998082247ULL;
unsigned long long int var_17 = 12280423078559904605ULL;
unsigned long long int var_18 = 5159200956672701741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
