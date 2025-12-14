#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17174;
short var_1 = (short)-1585;
int var_2 = -1094977617;
unsigned long long int var_8 = 3396473044210836783ULL;
int var_9 = -1098229976;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 1891025582258754949ULL;
int zero = 0;
unsigned int var_14 = 3566280597U;
short var_15 = (short)801;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
