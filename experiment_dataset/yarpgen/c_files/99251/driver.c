#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1308294226251820529ULL;
unsigned long long int var_3 = 5962995571627876013ULL;
int zero = 0;
unsigned long long int var_10 = 12826552568885947946ULL;
unsigned long long int var_11 = 17307885649965961247ULL;
unsigned long long int var_12 = 4777115649132774888ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
