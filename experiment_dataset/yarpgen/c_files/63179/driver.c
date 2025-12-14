#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_14 = 11695035986923715940ULL;
int zero = 0;
unsigned long long int var_17 = 11261492594019286379ULL;
long long int var_18 = -7458004712187523664LL;
short var_19 = (short)3284;
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
