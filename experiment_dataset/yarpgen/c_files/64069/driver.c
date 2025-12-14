#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1120202967;
short var_6 = (short)10352;
unsigned long long int var_10 = 7140493049676966830ULL;
long long int var_11 = -601860334397542575LL;
int zero = 0;
unsigned short var_16 = (unsigned short)19363;
unsigned short var_17 = (unsigned short)5728;
void init() {
}

void checksum() {
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
