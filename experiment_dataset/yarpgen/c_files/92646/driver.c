#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1046478234638765331LL;
unsigned long long int var_5 = 3261252139902176021ULL;
unsigned int var_12 = 515592506U;
unsigned char var_18 = (unsigned char)125;
int zero = 0;
unsigned int var_19 = 4012005613U;
unsigned long long int var_20 = 13572661054673515840ULL;
void init() {
}

void checksum() {
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
