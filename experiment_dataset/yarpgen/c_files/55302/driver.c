#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13175220848620564344ULL;
unsigned char var_3 = (unsigned char)192;
signed char var_6 = (signed char)63;
signed char var_7 = (signed char)23;
int zero = 0;
unsigned long long int var_12 = 16357325545016467993ULL;
long long int var_13 = -7871133655135648455LL;
unsigned long long int var_14 = 9131246165406789726ULL;
signed char var_15 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
