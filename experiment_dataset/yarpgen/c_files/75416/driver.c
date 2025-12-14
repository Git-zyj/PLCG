#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
signed char var_1 = (signed char)-73;
int var_4 = -804590449;
unsigned short var_5 = (unsigned short)26360;
unsigned short var_7 = (unsigned short)44984;
long long int var_8 = -2954830957739271076LL;
unsigned char var_12 = (unsigned char)251;
unsigned char var_13 = (unsigned char)133;
int zero = 0;
int var_14 = -694990884;
unsigned char var_15 = (unsigned char)58;
short var_16 = (short)16462;
unsigned long long int var_17 = 7525435404143435637ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
