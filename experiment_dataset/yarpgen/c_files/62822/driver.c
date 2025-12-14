#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15108363435583361202ULL;
short var_1 = (short)24338;
_Bool var_3 = (_Bool)0;
long long int var_5 = 1568641840684038335LL;
unsigned long long int var_6 = 16051898188361470054ULL;
int var_7 = 1148081595;
int var_8 = -1193879247;
unsigned int var_10 = 1343072108U;
short var_12 = (short)28595;
signed char var_16 = (signed char)17;
unsigned short var_17 = (unsigned short)2172;
int zero = 0;
int var_18 = 1274814637;
_Bool var_19 = (_Bool)0;
int var_20 = 1977874208;
_Bool var_21 = (_Bool)0;
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
