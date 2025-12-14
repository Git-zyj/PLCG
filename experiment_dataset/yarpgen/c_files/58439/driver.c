#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2513581247U;
int var_3 = -528175243;
short var_4 = (short)16114;
short var_6 = (short)8193;
unsigned char var_8 = (unsigned char)127;
long long int var_9 = -6593679031645695181LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)22768;
long long int var_12 = 7407654040575946738LL;
long long int var_13 = -8844311500573645818LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
