#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2446136092U;
short var_4 = (short)-6961;
unsigned int var_8 = 1689331810U;
unsigned int var_9 = 31719932U;
unsigned short var_10 = (unsigned short)6207;
unsigned short var_13 = (unsigned short)10787;
int zero = 0;
unsigned long long int var_14 = 8013812021206949272ULL;
unsigned short var_15 = (unsigned short)28044;
long long int var_16 = -8722759972960166349LL;
void init() {
}

void checksum() {
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
