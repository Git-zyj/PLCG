#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20215;
long long int var_2 = -6273390350204240585LL;
long long int var_4 = -8998567362420195842LL;
unsigned long long int var_5 = 10106911409678674870ULL;
long long int var_7 = -1829495983415464075LL;
long long int var_8 = -3689075762665936718LL;
unsigned int var_9 = 2236310879U;
signed char var_11 = (signed char)122;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -6376730875024775202LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
