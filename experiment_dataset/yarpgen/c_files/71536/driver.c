#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2143;
int var_2 = 1372103265;
long long int var_4 = -4762858042121542270LL;
long long int var_6 = -754375402138214199LL;
unsigned char var_9 = (unsigned char)127;
unsigned short var_11 = (unsigned short)10184;
int zero = 0;
unsigned long long int var_17 = 6956429185688466230ULL;
short var_18 = (short)1490;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
