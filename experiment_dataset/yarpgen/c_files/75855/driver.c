#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 283597698U;
long long int var_6 = -7311322419507223110LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-32365;
int zero = 0;
unsigned short var_19 = (unsigned short)36236;
short var_20 = (short)-10784;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
