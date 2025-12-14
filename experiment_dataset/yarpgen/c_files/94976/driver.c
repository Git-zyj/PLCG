#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25716;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-25299;
short var_4 = (short)787;
unsigned short var_5 = (unsigned short)64920;
int var_6 = -979099111;
unsigned short var_10 = (unsigned short)6695;
short var_12 = (short)20729;
unsigned char var_15 = (unsigned char)249;
long long int var_16 = -4869360489869836257LL;
unsigned long long int var_17 = 9710788934805078601ULL;
unsigned int var_19 = 3463234727U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3630600905396977455ULL;
long long int var_22 = -3040323756891731043LL;
signed char var_23 = (signed char)105;
short var_24 = (short)29175;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
