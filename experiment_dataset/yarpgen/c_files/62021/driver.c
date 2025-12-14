#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1479060919581695712ULL;
short var_1 = (short)18611;
int var_3 = -1086491217;
short var_8 = (short)-9200;
unsigned short var_10 = (unsigned short)23262;
unsigned short var_11 = (unsigned short)39249;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)62060;
unsigned char var_14 = (unsigned char)109;
unsigned char var_15 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
