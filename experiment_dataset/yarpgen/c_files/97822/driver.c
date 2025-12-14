#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2470373320U;
unsigned int var_7 = 1647426719U;
unsigned long long int var_8 = 7459484719342682335ULL;
short var_10 = (short)-5129;
signed char var_11 = (signed char)-83;
unsigned int var_15 = 15517369U;
int zero = 0;
unsigned long long int var_17 = 14707311516288056898ULL;
unsigned char var_18 = (unsigned char)216;
long long int var_19 = -5807456459163946407LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
