#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 866549162U;
unsigned short var_4 = (unsigned short)59154;
_Bool var_9 = (_Bool)0;
short var_10 = (short)10745;
int var_14 = -1957354474;
int zero = 0;
unsigned int var_16 = 705581825U;
unsigned int var_17 = 597641223U;
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
