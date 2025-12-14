#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)9411;
long long int var_9 = -3667201709080988730LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1404168679U;
unsigned short var_17 = (unsigned short)62628;
void init() {
}

void checksum() {
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
