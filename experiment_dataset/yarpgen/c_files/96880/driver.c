#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24751;
unsigned short var_2 = (unsigned short)27859;
long long int var_9 = 4289700973936007859LL;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)180;
int var_14 = 1451539097;
int var_15 = -2016880181;
int zero = 0;
unsigned long long int var_16 = 7093350782339544853ULL;
signed char var_17 = (signed char)-8;
short var_18 = (short)-27235;
void init() {
}

void checksum() {
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
