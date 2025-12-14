#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8857167148998456011LL;
unsigned int var_6 = 1914375516U;
unsigned char var_8 = (unsigned char)248;
int var_12 = -1450373567;
unsigned int var_14 = 137962365U;
unsigned long long int var_17 = 314513482021467601ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)30117;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
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
