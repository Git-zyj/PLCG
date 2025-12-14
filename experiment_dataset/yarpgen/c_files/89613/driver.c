#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22806;
unsigned char var_1 = (unsigned char)213;
unsigned char var_2 = (unsigned char)144;
unsigned long long int var_3 = 4312073676283392705ULL;
short var_4 = (short)-2432;
short var_7 = (short)21771;
int zero = 0;
unsigned long long int var_11 = 12825299956178989689ULL;
int var_12 = 1230355907;
unsigned int var_13 = 3581306469U;
unsigned char var_14 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
