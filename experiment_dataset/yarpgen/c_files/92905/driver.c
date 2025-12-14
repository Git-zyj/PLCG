#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 519572905U;
signed char var_2 = (signed char)-20;
unsigned long long int var_4 = 5575188300281396037ULL;
unsigned short var_11 = (unsigned short)48980;
int zero = 0;
unsigned long long int var_13 = 6925078443190379784ULL;
unsigned short var_14 = (unsigned short)62609;
void init() {
}

void checksum() {
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
