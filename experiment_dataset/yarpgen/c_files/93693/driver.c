#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28195;
signed char var_8 = (signed char)59;
long long int var_10 = -1647330433493340449LL;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
long long int var_17 = 3872287846148960041LL;
long long int var_18 = -3833696341060849856LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
