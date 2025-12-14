#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned long long int var_8 = 17167338505781248453ULL;
int var_9 = -1639484854;
int var_10 = 1944137160;
int zero = 0;
unsigned char var_13 = (unsigned char)28;
unsigned short var_14 = (unsigned short)41625;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)62962;
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
