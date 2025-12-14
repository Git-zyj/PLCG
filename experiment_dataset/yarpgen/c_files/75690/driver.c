#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1054105576;
long long int var_7 = -2361136518774076453LL;
unsigned short var_9 = (unsigned short)2207;
int zero = 0;
unsigned long long int var_12 = 10167804682277537825ULL;
long long int var_13 = -7668236728678291312LL;
unsigned long long int var_14 = 1820778906247068989ULL;
unsigned long long int var_15 = 8815749114289945003ULL;
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
