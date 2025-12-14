#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22817;
unsigned long long int var_2 = 11155069021939919943ULL;
signed char var_3 = (signed char)-47;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)68;
int var_9 = 126828668;
unsigned long long int var_10 = 5817416480063806630ULL;
unsigned char var_11 = (unsigned char)248;
int zero = 0;
short var_14 = (short)-31561;
unsigned short var_15 = (unsigned short)17133;
unsigned short var_16 = (unsigned short)21297;
long long int var_17 = 5642910683661443859LL;
unsigned short var_18 = (unsigned short)18767;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
