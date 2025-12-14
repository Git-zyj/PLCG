#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
int var_2 = 1277634789;
short var_3 = (short)18569;
long long int var_7 = -8899280574542562815LL;
unsigned char var_8 = (unsigned char)139;
long long int var_13 = -6486587861555776369LL;
unsigned short var_14 = (unsigned short)34994;
short var_15 = (short)-10961;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1707487789;
unsigned int var_19 = 225516097U;
short var_20 = (short)24857;
long long int var_21 = 4857679352159934277LL;
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
