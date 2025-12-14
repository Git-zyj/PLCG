#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29937;
signed char var_3 = (signed char)-90;
unsigned long long int var_4 = 8958854941680285924ULL;
unsigned short var_6 = (unsigned short)51908;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)48517;
int zero = 0;
long long int var_14 = -3553044118753505511LL;
unsigned short var_15 = (unsigned short)63174;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
