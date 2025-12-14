#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3700300785078409632LL;
unsigned short var_6 = (unsigned short)36546;
unsigned char var_7 = (unsigned char)70;
unsigned int var_8 = 2153073879U;
_Bool var_9 = (_Bool)0;
long long int var_10 = -6781544680105921108LL;
unsigned int var_11 = 2414806172U;
unsigned short var_13 = (unsigned short)5480;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7475498831246733198LL;
unsigned short var_22 = (unsigned short)12583;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
