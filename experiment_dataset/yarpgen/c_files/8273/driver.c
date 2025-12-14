#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_3 = (short)-21644;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-4210;
signed char var_6 = (signed char)21;
signed char var_7 = (signed char)86;
unsigned int var_8 = 3230517685U;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_13 = -1267370992;
short var_14 = (short)-10737;
short var_15 = (short)4480;
short var_16 = (short)-19886;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
