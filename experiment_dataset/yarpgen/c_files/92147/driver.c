#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1618935435;
short var_2 = (short)-334;
unsigned long long int var_10 = 11295630542730200674ULL;
int var_14 = -706154004;
int zero = 0;
unsigned long long int var_18 = 12690962858123131240ULL;
unsigned long long int var_19 = 1966774692491488231ULL;
unsigned short var_20 = (unsigned short)23193;
unsigned char var_21 = (unsigned char)250;
short var_22 = (short)-18846;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
