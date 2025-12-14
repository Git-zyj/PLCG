#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8739281035816240467LL;
unsigned int var_3 = 2464616282U;
unsigned short var_5 = (unsigned short)48721;
unsigned int var_6 = 510311718U;
unsigned long long int var_16 = 6860909644107010896ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)149;
short var_21 = (short)11687;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
