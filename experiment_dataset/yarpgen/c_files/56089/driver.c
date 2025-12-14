#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-100;
short var_5 = (short)1335;
short var_8 = (short)19562;
long long int var_9 = -7261162031459856817LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3646257645U;
short var_13 = (short)30203;
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
