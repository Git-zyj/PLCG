#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 406707962;
unsigned char var_8 = (unsigned char)135;
short var_9 = (short)13463;
long long int var_10 = 6415120826899155640LL;
int zero = 0;
unsigned short var_17 = (unsigned short)22607;
unsigned char var_18 = (unsigned char)144;
void init() {
}

void checksum() {
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
