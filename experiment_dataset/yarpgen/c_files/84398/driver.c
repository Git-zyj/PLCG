#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)144;
unsigned long long int var_3 = 13849697447880215824ULL;
unsigned long long int var_4 = 16680323100327526426ULL;
int var_5 = 1437599635;
unsigned long long int var_9 = 10656334452892879146ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)202;
unsigned long long int var_13 = 4719436176694208891ULL;
unsigned long long int var_14 = 648736179398575439ULL;
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
