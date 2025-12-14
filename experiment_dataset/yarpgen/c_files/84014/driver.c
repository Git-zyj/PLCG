#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2074390825U;
unsigned short var_2 = (unsigned short)12694;
short var_3 = (short)10803;
unsigned int var_4 = 4005654297U;
unsigned long long int var_6 = 13161246823651250754ULL;
signed char var_8 = (signed char)-45;
int zero = 0;
unsigned short var_10 = (unsigned short)4348;
short var_11 = (short)-17196;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
