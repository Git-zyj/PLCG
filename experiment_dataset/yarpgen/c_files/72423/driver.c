#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3392472185U;
long long int var_1 = 3935858406661795508LL;
unsigned int var_4 = 3649783404U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_12 = -8191037008821502816LL;
unsigned short var_14 = (unsigned short)27933;
unsigned char var_16 = (unsigned char)190;
int zero = 0;
int var_17 = -1135969694;
unsigned int var_18 = 2547994450U;
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
