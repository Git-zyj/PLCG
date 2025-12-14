#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5030975291026559161LL;
unsigned short var_10 = (unsigned short)42644;
long long int var_16 = -5618480222658878065LL;
long long int var_18 = 9197312790291040673LL;
int zero = 0;
signed char var_20 = (signed char)98;
short var_21 = (short)22352;
short var_22 = (short)-7734;
short var_23 = (short)549;
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
