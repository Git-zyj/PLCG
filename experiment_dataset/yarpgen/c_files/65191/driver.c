#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3904249815769741515LL;
int var_8 = 908041432;
short var_9 = (short)8022;
int zero = 0;
signed char var_10 = (signed char)124;
long long int var_11 = -9025361153684544795LL;
long long int var_12 = -27136785131502930LL;
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
