#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3838602093U;
int var_4 = 401759617;
unsigned short var_5 = (unsigned short)24108;
short var_11 = (short)19091;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 2824539240U;
int zero = 0;
unsigned char var_19 = (unsigned char)1;
short var_20 = (short)-28281;
unsigned int var_21 = 555984183U;
void init() {
}

void checksum() {
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
