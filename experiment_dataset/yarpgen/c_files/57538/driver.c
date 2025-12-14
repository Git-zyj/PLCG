#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1353476662;
unsigned int var_5 = 424848736U;
long long int var_9 = -519332447805599598LL;
long long int var_12 = 4589142070749447644LL;
int var_13 = 738621132;
short var_15 = (short)25637;
short var_16 = (short)-30951;
unsigned char var_17 = (unsigned char)203;
short var_18 = (short)11974;
int zero = 0;
long long int var_20 = 7197382634781846112LL;
short var_21 = (short)23924;
long long int var_22 = 583652488428539757LL;
short var_23 = (short)26215;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
