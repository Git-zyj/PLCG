#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2134618353U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 9697716286478852434ULL;
unsigned char var_8 = (unsigned char)152;
signed char var_9 = (signed char)-39;
int zero = 0;
unsigned long long int var_10 = 6484464601994628998ULL;
unsigned int var_11 = 3388997197U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1025663958U;
unsigned short var_14 = (unsigned short)49472;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
