#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7475697017157376956ULL;
unsigned short var_11 = (unsigned short)12156;
int zero = 0;
unsigned long long int var_18 = 13173195106964675975ULL;
unsigned short var_19 = (unsigned short)15634;
unsigned long long int var_20 = 17782782959326900015ULL;
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
