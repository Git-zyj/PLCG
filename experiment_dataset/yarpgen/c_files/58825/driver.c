#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2015124683584768493LL;
unsigned int var_3 = 1147355681U;
unsigned long long int var_5 = 1892226887145431094ULL;
int var_11 = 48164424;
signed char var_17 = (signed char)-66;
long long int var_18 = -7403728664365854733LL;
int zero = 0;
unsigned int var_20 = 170520275U;
signed char var_21 = (signed char)-103;
unsigned int var_22 = 2184786519U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
