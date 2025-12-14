#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64279;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)31871;
unsigned long long int var_8 = 6110095052927106558ULL;
int var_9 = 1351769658;
short var_15 = (short)-13324;
int zero = 0;
unsigned char var_18 = (unsigned char)252;
signed char var_19 = (signed char)113;
signed char var_20 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
