#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13546340137501561210ULL;
short var_1 = (short)16918;
long long int var_9 = -3656841105388157815LL;
int zero = 0;
long long int var_16 = 5005021239503480080LL;
unsigned short var_17 = (unsigned short)17453;
short var_18 = (short)16637;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
