#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15737275838918295136ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 6664552569135042882ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)121;
short var_15 = (short)18369;
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
