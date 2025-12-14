#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)90;
short var_6 = (short)11567;
_Bool var_13 = (_Bool)1;
unsigned short var_17 = (unsigned short)19591;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 778722785;
short var_20 = (short)-32382;
unsigned char var_21 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
