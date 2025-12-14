#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)74;
unsigned short var_2 = (unsigned short)35130;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)38009;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_13 = (short)-4478;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)127;
unsigned long long int var_16 = 4099377611789518206ULL;
short var_17 = (short)16655;
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
