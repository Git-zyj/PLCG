#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)41;
unsigned char var_8 = (unsigned char)131;
long long int var_11 = -988868660395525151LL;
int zero = 0;
int var_14 = 674548386;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)10263;
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
