#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -914385260346732547LL;
unsigned short var_11 = (unsigned short)27343;
unsigned int var_16 = 2901743427U;
int zero = 0;
unsigned short var_17 = (unsigned short)28242;
unsigned short var_18 = (unsigned short)24203;
unsigned long long int var_19 = 13083518211728151741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
