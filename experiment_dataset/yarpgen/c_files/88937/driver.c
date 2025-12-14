#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-16129;
unsigned short var_5 = (unsigned short)38494;
unsigned long long int var_6 = 169647026984490900ULL;
unsigned char var_7 = (unsigned char)212;
signed char var_9 = (signed char)-116;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-1224;
short var_12 = (short)23503;
int zero = 0;
unsigned int var_13 = 53951183U;
unsigned char var_14 = (unsigned char)239;
short var_15 = (short)-16361;
unsigned short var_16 = (unsigned short)27172;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
