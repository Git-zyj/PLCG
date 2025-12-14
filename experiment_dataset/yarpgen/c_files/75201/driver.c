#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
unsigned char var_2 = (unsigned char)31;
int var_3 = -94547049;
int var_4 = -316238011;
short var_6 = (short)26865;
long long int var_10 = -7371117886481599103LL;
int zero = 0;
short var_11 = (short)-28392;
unsigned long long int var_12 = 12533372238736959283ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 409215092U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
