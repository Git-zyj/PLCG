#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = 41439188;
int var_4 = -1443736280;
short var_6 = (short)-22349;
unsigned char var_8 = (unsigned char)105;
int var_10 = -1369300765;
int var_13 = -1744420718;
_Bool var_15 = (_Bool)1;
long long int var_16 = -1154146115448976181LL;
int zero = 0;
short var_17 = (short)31286;
int var_18 = 1225454763;
short var_19 = (short)-14377;
int var_20 = 433068407;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
