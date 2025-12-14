#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)29701;
unsigned short var_11 = (unsigned short)61117;
short var_16 = (short)13017;
int zero = 0;
unsigned int var_19 = 965919489U;
long long int var_20 = -8763423657383861740LL;
unsigned int var_21 = 3895415398U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
