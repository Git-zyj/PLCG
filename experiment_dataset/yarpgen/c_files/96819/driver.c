#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned short var_5 = (unsigned short)30554;
int var_8 = 1763747517;
short var_12 = (short)18609;
int var_13 = 1354396987;
int zero = 0;
unsigned long long int var_16 = 11792342195827902600ULL;
long long int var_17 = -4438102866969227674LL;
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
