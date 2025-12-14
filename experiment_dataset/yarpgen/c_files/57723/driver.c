#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1372247736;
int var_2 = 1309337571;
long long int var_5 = 8133012718013335344LL;
unsigned short var_6 = (unsigned short)49376;
int zero = 0;
unsigned short var_10 = (unsigned short)6657;
long long int var_11 = -5290249840133860003LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
