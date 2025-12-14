#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8245278232158526766ULL;
long long int var_9 = 296408893796401177LL;
long long int var_14 = 289252101946787197LL;
short var_15 = (short)25939;
int zero = 0;
unsigned int var_16 = 725799747U;
long long int var_17 = -6241838210533162950LL;
unsigned long long int var_18 = 1014771393722917652ULL;
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
