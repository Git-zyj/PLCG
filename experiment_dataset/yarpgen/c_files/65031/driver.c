#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 837356360;
short var_4 = (short)-18370;
long long int var_5 = -3507520331596988145LL;
unsigned int var_6 = 3623490857U;
int var_7 = -1734599323;
int var_8 = -2138799803;
unsigned int var_10 = 2181580227U;
int zero = 0;
short var_12 = (short)32652;
unsigned int var_13 = 2485742869U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
