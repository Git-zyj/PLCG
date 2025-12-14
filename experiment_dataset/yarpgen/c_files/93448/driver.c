#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)27664;
unsigned char var_3 = (unsigned char)86;
short var_4 = (short)-29924;
long long int var_7 = -4559343103698518475LL;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)125;
int zero = 0;
signed char var_13 = (signed char)71;
unsigned long long int var_14 = 8775357338732227968ULL;
long long int var_15 = -4582484047728239459LL;
short var_16 = (short)2521;
short var_17 = (short)18967;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
