#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7610619110818425576LL;
_Bool var_2 = (_Bool)1;
int var_4 = -584776928;
long long int var_6 = -5813521804010113754LL;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
unsigned short var_15 = (unsigned short)48815;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
