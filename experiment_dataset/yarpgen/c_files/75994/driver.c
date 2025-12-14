#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4777971451695185598ULL;
unsigned long long int var_2 = 1749911124482477629ULL;
int var_4 = 1229574988;
int var_6 = -1119997154;
unsigned long long int var_9 = 3725936987575557477ULL;
long long int var_10 = 6099150122099962326LL;
int zero = 0;
unsigned long long int var_12 = 11083889176316791023ULL;
signed char var_13 = (signed char)113;
unsigned char var_14 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
