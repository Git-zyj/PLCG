#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12827;
long long int var_2 = -8258453735491676082LL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)65;
short var_7 = (short)17868;
long long int var_11 = -7531760509899224991LL;
int zero = 0;
unsigned short var_13 = (unsigned short)6307;
int var_14 = -1579080722;
void init() {
}

void checksum() {
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
