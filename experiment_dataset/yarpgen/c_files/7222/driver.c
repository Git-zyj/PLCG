#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1874245885;
int var_3 = 1373192869;
short var_7 = (short)2237;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 10088845198057223101ULL;
short var_11 = (short)21633;
unsigned long long int var_12 = 9752539711340145745ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
