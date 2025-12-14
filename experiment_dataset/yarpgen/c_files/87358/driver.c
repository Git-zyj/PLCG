#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 59851662375381314ULL;
long long int var_7 = 3952141049208078805LL;
unsigned short var_8 = (unsigned short)17788;
int zero = 0;
unsigned short var_15 = (unsigned short)22101;
short var_16 = (short)30305;
unsigned long long int var_17 = 10361043069917427679ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
