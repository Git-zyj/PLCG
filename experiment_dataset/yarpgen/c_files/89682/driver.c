#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)13999;
long long int var_8 = -2739922018761214605LL;
signed char var_10 = (signed char)-43;
short var_11 = (short)-2015;
short var_12 = (short)-22354;
int zero = 0;
short var_17 = (short)6521;
unsigned char var_18 = (unsigned char)117;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
