#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7916902876370451817ULL;
unsigned long long int var_4 = 11825577844387890637ULL;
int var_14 = -1202966952;
int zero = 0;
signed char var_18 = (signed char)-43;
long long int var_19 = 7628610191469150229LL;
int var_20 = 876473493;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
