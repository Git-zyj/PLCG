#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5322080434839988463ULL;
long long int var_2 = 5000284990681257003LL;
short var_3 = (short)18278;
short var_4 = (short)23106;
short var_5 = (short)-16319;
unsigned long long int var_6 = 9478832788792051725ULL;
short var_8 = (short)27735;
long long int var_9 = -7588980685808073063LL;
short var_10 = (short)2114;
int zero = 0;
short var_11 = (short)-15589;
unsigned long long int var_12 = 14142697825266277554ULL;
short var_13 = (short)3158;
void init() {
}

void checksum() {
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
