#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)18999;
unsigned char var_6 = (unsigned char)159;
int var_16 = 1558934144;
int zero = 0;
long long int var_18 = 1395392766898869188LL;
signed char var_19 = (signed char)100;
unsigned short var_20 = (unsigned short)28608;
unsigned long long int var_21 = 17805078021844621612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
