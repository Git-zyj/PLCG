#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)19;
unsigned short var_3 = (unsigned short)6265;
int var_5 = 1601467506;
long long int var_13 = -3888620315861479726LL;
int var_17 = -1320141723;
unsigned int var_19 = 787738790U;
int zero = 0;
short var_20 = (short)1759;
_Bool var_21 = (_Bool)0;
long long int var_22 = -7979159021614805670LL;
unsigned int var_23 = 3269779529U;
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
