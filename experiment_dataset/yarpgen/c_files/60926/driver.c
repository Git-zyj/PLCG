#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13758793663411933421ULL;
unsigned short var_2 = (unsigned short)13474;
short var_3 = (short)8298;
int var_4 = -1352972880;
long long int var_7 = -2106078997374776433LL;
short var_8 = (short)-5115;
signed char var_10 = (signed char)103;
int zero = 0;
unsigned short var_12 = (unsigned short)31542;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)40646;
long long int var_15 = 2826243126398092603LL;
unsigned short var_16 = (unsigned short)47531;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
