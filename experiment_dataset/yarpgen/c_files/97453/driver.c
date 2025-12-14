#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4923565995454904951LL;
unsigned short var_1 = (unsigned short)37283;
long long int var_4 = 7792349162022301614LL;
long long int var_6 = 6740214096738222474LL;
signed char var_7 = (signed char)3;
unsigned char var_16 = (unsigned char)171;
short var_17 = (short)7262;
int zero = 0;
int var_19 = -1390097093;
signed char var_20 = (signed char)82;
void init() {
}

void checksum() {
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
