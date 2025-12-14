#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12147;
signed char var_1 = (signed char)-19;
unsigned int var_2 = 2607356574U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3263756948U;
_Bool var_5 = (_Bool)0;
long long int var_7 = 311922923509235561LL;
int var_8 = 1902867649;
unsigned short var_9 = (unsigned short)47613;
unsigned int var_10 = 4036907170U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-8176;
short var_15 = (short)-21322;
unsigned char var_16 = (unsigned char)109;
unsigned char var_17 = (unsigned char)92;
void init() {
}

void checksum() {
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
