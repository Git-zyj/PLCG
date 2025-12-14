#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55422;
_Bool var_1 = (_Bool)1;
long long int var_2 = -4628252235150405447LL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)11727;
unsigned long long int var_7 = 14132047590077666714ULL;
unsigned int var_8 = 1707444344U;
signed char var_9 = (signed char)27;
int var_10 = 20517850;
unsigned short var_11 = (unsigned short)35637;
int var_12 = -138021136;
int zero = 0;
signed char var_14 = (signed char)-10;
long long int var_15 = -7255111893904884330LL;
long long int var_16 = -4305918217608324687LL;
unsigned long long int var_17 = 6021304509860394307ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
