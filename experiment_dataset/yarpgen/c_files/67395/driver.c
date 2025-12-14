#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18933;
short var_2 = (short)23543;
unsigned long long int var_3 = 3842907904157984275ULL;
short var_4 = (short)-4369;
int var_8 = 1424680143;
short var_9 = (short)26241;
unsigned short var_10 = (unsigned short)10453;
int zero = 0;
short var_11 = (short)13289;
long long int var_12 = -2139967890281249410LL;
int var_13 = -1186866110;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
