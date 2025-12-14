#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6983;
int var_1 = 1097503306;
long long int var_9 = -4140187658375978868LL;
int var_10 = -355307613;
int var_11 = -118459062;
short var_14 = (short)-111;
int zero = 0;
signed char var_15 = (signed char)7;
unsigned char var_16 = (unsigned char)19;
short var_17 = (short)-27117;
void init() {
}

void checksum() {
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
