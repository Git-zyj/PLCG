#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2099020530U;
signed char var_2 = (signed char)109;
long long int var_3 = -1289275656858481066LL;
unsigned short var_4 = (unsigned short)27280;
unsigned long long int var_5 = 6117795934904936693ULL;
unsigned short var_6 = (unsigned short)29950;
long long int var_7 = -5948951737834543370LL;
signed char var_9 = (signed char)-43;
int zero = 0;
short var_10 = (short)-6397;
unsigned long long int var_11 = 11498513038390767178ULL;
unsigned char var_12 = (unsigned char)162;
int var_13 = -1888781430;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
