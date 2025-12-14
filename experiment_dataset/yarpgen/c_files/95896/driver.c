#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)99;
unsigned char var_5 = (unsigned char)38;
unsigned char var_8 = (unsigned char)229;
unsigned int var_10 = 2071507212U;
unsigned long long int var_11 = 12181463777050026421ULL;
long long int var_12 = -4296979467833489376LL;
short var_14 = (short)27008;
int zero = 0;
unsigned int var_15 = 2664011884U;
unsigned int var_16 = 3711362429U;
void init() {
}

void checksum() {
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
