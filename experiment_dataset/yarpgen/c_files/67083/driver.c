#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11461;
signed char var_4 = (signed char)31;
short var_7 = (short)4621;
unsigned char var_9 = (unsigned char)235;
short var_14 = (short)23995;
int zero = 0;
unsigned short var_16 = (unsigned short)827;
signed char var_17 = (signed char)-81;
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
