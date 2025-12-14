#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1516643227U;
unsigned short var_4 = (unsigned short)45676;
unsigned long long int var_9 = 11708152911150964184ULL;
unsigned short var_11 = (unsigned short)25963;
int zero = 0;
unsigned int var_17 = 1683311403U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
