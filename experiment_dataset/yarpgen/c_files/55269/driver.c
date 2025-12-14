#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8127834714115972994LL;
long long int var_2 = -771292991187744770LL;
unsigned char var_4 = (unsigned char)36;
unsigned int var_8 = 3694608703U;
int zero = 0;
unsigned short var_14 = (unsigned short)64242;
unsigned int var_15 = 3848151066U;
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
