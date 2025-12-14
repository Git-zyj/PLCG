#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20391;
signed char var_2 = (signed char)-82;
long long int var_4 = 1281585546979185840LL;
unsigned char var_5 = (unsigned char)125;
unsigned int var_10 = 2505751818U;
short var_11 = (short)18383;
long long int var_12 = -2795942942476829329LL;
int zero = 0;
short var_13 = (short)27934;
int var_14 = 1399850424;
unsigned short var_15 = (unsigned short)34846;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
