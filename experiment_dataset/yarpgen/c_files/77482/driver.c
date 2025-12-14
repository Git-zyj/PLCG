#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1317;
unsigned long long int var_9 = 1940281358335295169ULL;
int var_11 = 1860472010;
int var_14 = 321520540;
int zero = 0;
unsigned short var_18 = (unsigned short)324;
short var_19 = (short)3599;
int var_20 = 2010053974;
short var_21 = (short)-136;
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
