#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2278;
int var_1 = 184518905;
int var_3 = -1805093866;
int var_5 = 984926890;
short var_8 = (short)22834;
unsigned short var_9 = (unsigned short)63269;
_Bool var_10 = (_Bool)0;
short var_11 = (short)27497;
unsigned long long int var_12 = 13335991561253395425ULL;
int zero = 0;
signed char var_13 = (signed char)106;
short var_14 = (short)-12395;
int var_15 = 1901090880;
short var_16 = (short)27200;
unsigned long long int var_17 = 5582633929734502185ULL;
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
