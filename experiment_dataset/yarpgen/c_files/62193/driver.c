#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15281484124221433471ULL;
long long int var_11 = 5413526026056698886LL;
int var_15 = 1133551878;
int zero = 0;
unsigned char var_19 = (unsigned char)224;
unsigned int var_20 = 2670931720U;
void init() {
}

void checksum() {
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
