#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 401320346;
long long int var_9 = 7341089742892003144LL;
unsigned short var_11 = (unsigned short)56287;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
short var_15 = (short)5546;
unsigned char var_16 = (unsigned char)166;
short var_17 = (short)8062;
unsigned long long int var_18 = 9829668619279971220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
