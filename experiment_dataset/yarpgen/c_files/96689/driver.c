#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3297527633U;
unsigned long long int var_1 = 15685147082462541746ULL;
unsigned int var_3 = 3836831198U;
unsigned short var_8 = (unsigned short)15477;
unsigned int var_9 = 1129035848U;
long long int var_13 = -784155211908911240LL;
long long int var_14 = -8586002768182783065LL;
int zero = 0;
unsigned long long int var_17 = 9526843428860667957ULL;
short var_18 = (short)18641;
unsigned long long int var_19 = 177304136130694983ULL;
long long int var_20 = -4357522028077591218LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
