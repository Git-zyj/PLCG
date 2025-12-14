#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16209774080451350318ULL;
long long int var_7 = 1738409419088951195LL;
unsigned short var_9 = (unsigned short)47203;
int zero = 0;
unsigned int var_11 = 272905137U;
unsigned char var_12 = (unsigned char)167;
unsigned char var_13 = (unsigned char)126;
unsigned int var_14 = 2149789204U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
