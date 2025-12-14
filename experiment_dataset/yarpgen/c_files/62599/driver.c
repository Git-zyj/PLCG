#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1999532888;
short var_1 = (short)-30593;
_Bool var_2 = (_Bool)1;
short var_3 = (short)9301;
unsigned long long int var_4 = 6092556050884884792ULL;
unsigned long long int var_5 = 2641916695775538225ULL;
unsigned long long int var_7 = 14181364194472951109ULL;
int var_8 = 278106769;
unsigned char var_10 = (unsigned char)54;
unsigned int var_11 = 2226705976U;
short var_14 = (short)15034;
int var_15 = 1369627201;
unsigned short var_16 = (unsigned short)54376;
short var_18 = (short)-29922;
int zero = 0;
unsigned char var_19 = (unsigned char)152;
short var_20 = (short)-14414;
short var_21 = (short)18902;
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
